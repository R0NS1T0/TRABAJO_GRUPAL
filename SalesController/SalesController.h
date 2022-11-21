#pragma once

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;
using namespace System::IO;

namespace SalesController {
	public ref class Controller
	{
		private:
			static List <Product^>^ productList = gcnew List<Product^>();
			static List <Employee^>^ employeeList = gcnew List<Employee^>();
			static List <Customer^>^ customerList = gcnew List<Customer^>();
			static List <Sale^>^ salesList = gcnew List<Sale^>();
			static List <Store^>^ storeList = gcnew List<Store^>();
			static List <Session^>^SessionList= gcnew List<Session^>();
			static List <StoreProducts^>^ storeProductList = gcnew List<StoreProducts^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			static int AddProduct(Product^ product);
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(double productCode);
			static List <Product^>^ QueryAllProducts();
			static Product^ QueryProductByID(double productCode);
			static Product^ QueryProductByName(String^ productname);
			static void LoadProductsData();
			static void PersistWarehouse();
			static int searchProduct(Product^ productcode);


		//funciones relacionadas al registro de usuarios, complementado con la inscripción de nuevos usuarios
			static Employee^ Login(String ^CompanyUser, String^ Password);
			static int AddCompanyUser(Employee^ employee);
			static int UpdateCompanyUser(Employee^ employee);
			static int DeleteCompanyUser(String^ userId);
			static List<Employee^>^ QueryAllUsers();
			static Employee^ QueryUserById(String^ userId);
			static void LoadUsersData();
			static void PersistUsersData();
		//Funciones para el mantenimiento de clientes
			static int AddCustomer(Customer^ customer);
			static int UpdateCustomer(Customer^ customer);
			static int DeleteCustomer(String^ customername);
			static List<Customer^>^ QueryAllCustomers();
			static Customer^ QueryCustomersbyDNI(String^ customerDNI);
			static Customer^ QueryCustomerbyName(String^ customername);
			static void LoadCustomerData();
			static void PersistCustomersData();


		//funciones para el mantenimiento de venta
			static void RegisterSale(Sale^ sale);
			static double QueryLastSale();
			static Sale^ QuerySalesbyID(Double id);
			static void PersistSales();
			static List<Sale^>^ QueryAllSales();
			static void LoadSalesData();
		//funciones para el mantenimiento de tiendas***
			static int AddStore(Store^ store);
			static int UpdateStore(Store^ store);
			static int DeleteStore(int storeID);
			static List <Store^>^ QueryAllStores();
			static Store^ QueryStoreByID(int storeID);
			static void LoadStoresData();
			static void PersistStores();

			//implementando los productos unicos de cada tienda
			static List<StoreProducts^>^ QueryStoreProducts();	//muestra la lista de productos en el archivo
			static void LoadStoreStock();			//carga stock de tienda
			static void PersistStoreStock();		//recuerda stock de tienda
			static int addProductToStore(StoreProducts^ sp);	//funcion Para añadir productos
			static int EraseProductFromStore(int productID);	//funcion para eliminar un producto


		//funciones extra
			static void SaveUserData(String^ username);	//guarda los datos de inicio de sesión en una clase
			static void EraseAll();		//asegura que estos datos sean unicos de cada inicio de sesión
			static Session^ rememberdata();
	};
}		
