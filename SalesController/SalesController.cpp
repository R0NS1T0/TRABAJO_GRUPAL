#include "pch.h"

#include "SalesController.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

Void SalesController::Controller::PersistWarehouse() {
    StreamWriter^ sw = gcnew StreamWriter("ListaProductos.txt");
    for (int i = 0; i < productList->Count; i++) {
        sw->WriteLine(productList[i]->Code + "," + productList[i]->Price + "," +
            productList[i]->Size + "," + productList[i]->Stock + "," +
            productList[i]->Description + "," + productList[i]->Color);
    }
    sw->Close();
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

int SalesController::Controller::DeleteProduct(String^ productCode)
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

Product^ SalesController::Controller::QueryProductByID(String^ productCode)
{
    for (int i = 0; i < productList->Count; i++)
        if (productCode == productList[i]->Code) {
            return productList[i];
        }
    return nullptr;
}
Void SalesController::Controller::LoadProductsData() {

    productList = gcnew List<Product^>();

    StreamReader^ sr = gcnew StreamReader("ListaProductos.txt");
    while (!sr->EndOfStream) {
        Product^ p = gcnew Product();
        String^ line = sr->ReadLine();

        array<String^>^ data = line->Split(',');
        p->Code = data[0];						//Codigo
        p->Price = Convert::ToDouble(data[1]);	//Precio
        p->Size = data[2];						//Talla
        p->Stock = Convert::ToDouble(data[3]);	//Stock
        p->Description = data[4];				//Descripcion
        p->Color = data[5];						//Color
        productList->Add(p);
    }
    sr->Close();
}


Employee^ SalesController::Controller::Login(String^ CompanyUser, String^ Password)
{
    Employee^ employee;     //variable que identifica que al usuario registrado
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
int SalesController::Controller::AddCompanyUser(Employee^ employee)
{
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
    return nullptr;
}

