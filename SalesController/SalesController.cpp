#include "pch.h"

#include "SalesController.h"

using namespace System::Runtime::Serialization::Formatters::Binary;

Void SalesController::Controller::PersistWarehouse() {

    Stream^ stream = File::Open("Products.bin", FileMode::Create);
    try {
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        bFormatter->Serialize(stream, productList);
    }
    catch(FileNotFoundException^ ex){}
    catch(Exception^ ex){}
    finally {
        if (stream!=nullptr)stream->Close();
    }
    
}
int SalesController::Controller::searchProduct(Product^ productCode)
{
    LoadProductsData();
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    for (int i = 0; i < activeProductsList->Count; i++)
        if (productCode->Code == productList[i]->Code) {
            if (productCode->Stock > 0) {
                return 1;
            }
            //esta función identifica si el producto existe
        }
    return 0;
}

int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    PersistWarehouse();
    return 1;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (product->Code == productList[i]->Code) {
            productList[i] = product;
            PersistWarehouse();
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteProduct(int productCode)
{
    for (int i = 0; i < productList->Count; i++)
        if (productCode == productList[i]->Code) {
            productList->RemoveAt(i);
            PersistWarehouse();
            return 1;
        }
    return 0;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    LoadProductsData();
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Stock >= 0) {
            activeProductsList->Add(productList[i]);
        }
    }
    return activeProductsList;
}

Product^ SalesController::Controller::QueryProductByID(int productCode)
{
    for (int i = 0; i < productList->Count; i++)
        if (productCode == productList[i]->Code) {
            return productList[i];
        }
    return nullptr;
}
Product^ SalesController::Controller::QueryProductByName(String^ productname)
{
    for (int i = 0; i < productList->Count; i++)
        if (productname == productList[i]->Name) {
            return productList[i];
        }
    return nullptr;
}
void SalesController::Controller::LoadStoresData(){
    storeList = gcnew List<Store^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Stores.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    storeList = (List<Store^>^)bFormatter->Deserialize(sr);
    }
    catch(FileNotFoundException^ ex){}
    catch(Exception^ ex){}
    finally {
        if(sr!=nullptr) sr->Close();
    }
   
}
void SalesController::Controller::PersistStores()
{
    Stream^ stream = File::Open("Stores.bin", FileMode::Create);
    try {
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        bFormatter->Serialize(stream, storeList);
    }
    catch (FileNotFoundException^ ex){}
    catch(Exception^ ex){}
    finally {
        if (stream!=nullptr) stream->Close();
    }
   
}


List<StoreProducts^>^ SalesController::Controller::QueryStoreProducts(){
    LoadStoreStock();
    List<StoreProducts^>^ activeStockList = gcnew List<StoreProducts^>();
    for (int i = 0; i < storeProductList->Count; i++) {
        if ((storeProductList[i]->Stock >= 0) && (storeProductList[i]->Status=='A')) {
            activeStockList->Add(storeProductList[i]);
        }
    }
    return activeStockList;
}
void SalesController::Controller::LoadStoreStock()
{
    storeProductList = gcnew List<StoreProducts^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("StockPerStore.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        storeProductList = (List<StoreProducts^>^)bFormatter->Deserialize(sr);
    }
    catch(FileNotFoundException^ ex){}
    catch(Exception^ ex){}
    finally {
        if (sr!=nullptr) sr->Close();
    }
}
void SalesController::Controller::PersistStoreStock() {
     Stream^ stream = File::Open("StockPerStore.bin", FileMode::Create);
try{
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, storeProductList);
}
catch (FileNotFoundException^ ex) {}
catch (Exception^ ex) {}
finally {
    if (stream != nullptr) stream->Close();
}


}
int SalesController::Controller::addProductToStore(StoreProducts^ sp)
{
    storeProductList->Add(sp);
    PersistStoreStock();
    return 1;
}
int SalesController::Controller::EraseProductFromStore(int productID)
{
    for (int i = 0; i < storeProductList->Count; i++)
        if (productID == storeProductList[i]->Code) {
            storeProductList->RemoveAt(i);
            PersistStoreStock();
            return 1;
        }
    return 0;
}



void SalesController::Controller::SaveUserData(String^ username)
{
    //esto va a sacar los datos de Employee en login, guardarlos en una lista de datos local para facilitar el proceso
    //NO va a requerir de permanencia tras el uso
    EraseAll();

    SessionList = gcnew List<Session^>();
    Employee^ loggeduser = QueryUserById(username);
    Session^ s = gcnew Session;
    
    s->ActiveUser = loggeduser->CompanyUser;
    s->authority = loggeduser->AuthorityClass;
    s->Username = loggeduser->Name;
    s->Lastname = loggeduser->LastName;

    SessionList->Add(s);
}
void SalesController::Controller::EraseAll()
{
    SessionList->Clear();

}

Session^ SalesController::Controller::rememberdata()
{
    Session^ s = gcnew Session();
    for (int i=0; i < SessionList->Count; i++) {
        s = SessionList[i];
    }
    return s;
}

Void SalesController::Controller::LoadProductsData() {
   
    productList = gcnew List<Product^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Products.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        productList = (List<Product^>^)bFormatter->Deserialize(sr);
    }
    catch(FileNotFoundException^ ex){}
    catch(Exception^ ex){}
    finally {
        if (sr!=nullptr) sr->Close();
    }  
}


Employee^ SalesController::Controller::Login(String^ CompanyUser, String^ Password)
{
    Employee^ employee;   
    //funcion que permite la lectura de datos de una lista de usuarios registrados
    employeeList = gcnew List<Employee^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Users.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        employeeList = (List<Employee^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {}
    catch (Exception^ ex) {}
    finally {
        if (sr != nullptr) sr->Close();
    }
    for (int i = 0; i < employeeList->Count; i++) {
        if (CompanyUser == employeeList[i]->CompanyUser && Password == employeeList[i]->Password) {
            //esta funcion requiere de una lectura de datos encriptado
            //el formato que estoy eligiendo es BIN
            //lectura de datos ejecutada en la misma función, no va a requerir una función adicional de carga de datos
            employee = employeeList[i];
            return employee;
        }
    }
    return employee;
}

void SalesController::Controller::LoadUsersData() {
    //funcion que permite la lectura de datos de una lista de usuarios registrados
    employeeList = gcnew List<Employee^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Users.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        employeeList = (List<Employee^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {}
    catch (Exception^ ex) {}
    finally {
        if (sr != nullptr) sr->Close();
    }
}
void SalesController::Controller::PersistUsersData() {
    Stream^ stream = File::Open("Users.bin", FileMode::Create);
    try{
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        bFormatter->Serialize(stream, employeeList);
    }
    catch (FileNotFoundException^ ex) {}
    catch (Exception^ ex) {}
    finally {
        if (stream != nullptr) stream->Close();
    }
}
void SalesController::Controller::LoadCustomerData()
{
    customerList = gcnew List<Customer^>();
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Customers.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        customerList = (List<Customer^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {}
    catch (Exception^ ex) {}
    finally {
        if (sr != nullptr) sr->Close();
    }
}

void SalesController::Controller::PersistCustomersData()
{
    Stream^ stream = File::Open("Customers.bin", FileMode::Create);
    try {
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        bFormatter->Serialize(stream, customerList);
    }
    catch (FileNotFoundException^ ex) {}
    catch (Exception^ ex) {}
    finally {
        if (stream != nullptr) stream->Close();
    }
}
void SalesController::Controller::RegisterSale(Sale^ sale)
{
    salesList->Add(sale);
    PersistSales();
}
double SalesController::Controller::QueryLastSale()
{
    LoadSalesData();
    double lastSaleId = 0;
    for (int i = 0; i < salesList->Count; i++) {
        if (salesList[i]->ID > lastSaleId)
            lastSaleId = salesList[i]->ID;
    }
    return lastSaleId;
}
Sale^ SalesController::Controller::QuerySalesbyID(int id)
{

    for (int i = 0; i < salesList->Count; i++)
        if (id == salesList[i]->ID) {
            return salesList[i];
        }
    return nullptr;
}
void SalesController::Controller::PersistSales()
{
    Stream^ stream = File::Open("Sales.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, salesList); 
    stream->Close();
}
List<Sale^>^ SalesController::Controller::QueryAllSales()
{
    LoadSalesData();
    return salesList;
}
void SalesController::Controller::LoadSalesData()
{
    salesList = gcnew List<Sale^>();
    //Lectura desde un archivo binario
    Stream^ sr = nullptr;
    try {
        sr = File::Open("Sales.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        salesList = (List<Sale^>^)bFormatter->Deserialize(sr);
    }
    catch (FileNotFoundException^ ex) {
    }
    catch (Exception^ ex) {
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
}
int SalesController::Controller::AddStore(Store^ store)
{
    storeList->Add(store);
    PersistStores();
    return 1;
}
int SalesController::Controller::UpdateStore(Store^ store)
{
    for (int i = 0; i < storeList->Count; i++)
        if (store->ID== storeList[i]->ID) {
            storeList[i] = store;
            PersistStores();
            return 1;
        }
    return 0;
}
int SalesController::Controller::DeleteStore(int storeID)
{
    for (int i = 0; i < storeList->Count; i++)
        if (storeID == storeList[i]->ID) {
            storeList->RemoveAt(i);
            PersistStores();
            return 1;
        }
    return 0;
}
List<Store^>^ SalesController::Controller::QueryAllStores()
{
    LoadStoresData();
    List<Store^>^ StoreList = gcnew List<Store^>();
    for (int i = 0; i < storeList->Count; i++) {
        StoreList->Add(storeList[i]);
    }
    return StoreList;
}
Store^ SalesController::Controller::QueryStoreByID(int storeID)
{
    for (int i = 0; i < storeList->Count; i++)
        if (storeID == storeList[i]->ID) {
            return storeList[i];
        }
    return nullptr; 
}
int SalesController::Controller::AddCustomer(Customer^ customer)
{
    customerList->Add(customer);
    PersistCustomersData();
    return 1;
}

int SalesController::Controller::UpdateCustomer(Customer^ customer)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customer->Name == customerList[i]->Name) {
            customerList[i] = customer;
            PersistCustomersData();
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteCustomer(String^ customername)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customername == customerList[i]->Name) {
            customerList->RemoveAt(i);
            PersistCustomersData();
            return 1;
        }
    return 0;
}

List<Customer^>^ SalesController::Controller::QueryAllCustomers()
{
    LoadCustomerData();
    List<Customer^>^ CustomerList = gcnew List<Customer^>();
    for (int i = 0; i < customerList->Count; i++) {
        CustomerList->Add(customerList[i]);
    }
    return CustomerList;
}

Customer^ SalesController::Controller::QueryCustomersbyDNI(String^ customerDNI)
{
    for (int i = 0; i < customerList->Count; i++)
        if (customerDNI == customerList[i]->DNI) {
            return customerList[i];
        }
    return nullptr;
}

Customer^ SalesController::Controller::QueryCustomerbyName(String^ customerName)
{
    for (int i = 0; i < customerList->Count; i++) {
        if (customerName == customerList[i]->Name) {
            return customerList[i];
        }
        if (customerName == customerList[i]->LastName) {
            return customerList[i];
        }
    }
    return nullptr;
}

int SalesController::Controller::AddCompanyUser(Employee^ employee)
{
    LoadUsersData();
    employeeList->Add(employee);
    PersistUsersData();
    return 1;
}

int SalesController::Controller::UpdateCompanyUser(Employee^ employee) {
    for (int i = 0; i < employeeList->Count; i++)
        if (employee->CompanyUser == employeeList[i]->CompanyUser) {
            employeeList[i] = employee;
            PersistUsersData();
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteCompanyUser(String^ userId){
    for (int i = 0; i < employeeList->Count; i++)
        if (userId == employeeList[i]->CompanyUser) {
            employeeList->RemoveAt(i);
            PersistUsersData();
            return 1;
        }
    return 0;
}

List<Employee^>^ SalesController::Controller::QueryAllUsers()
{
    LoadUsersData();
    List<Employee^>^ UserList = gcnew List<Employee^>();
    for (int i = 0; i < employeeList->Count; i++) { 
            UserList->Add(employeeList[i]);
    }
    return UserList;
}

Employee^ SalesController::Controller::QueryUserById(String^ userId)
{
    for (int i = 0; i < employeeList->Count; i++)
        if (userId == employeeList[i]->CompanyUser) {
            return employeeList[i];
        }
    return nullptr; //11
}

