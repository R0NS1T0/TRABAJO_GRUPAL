#pragma once

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class Controller
	{
		private:
			static List <Product^>^ productList = gcnew List<Product^>();
			static List <Employee^>^ employeeList = gcnew List<Employee^>();
			static List <Customer^>^ customerList = gcnew List<Customer^>();
			static List <Sale^>^ salesList = gcnew List<Sale^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			static int AddProduct(Product^ product);
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(String^ productCode);
			static List <Product^>^ QueryAllProducts();
			static Product^ QueryProductByID(String^ productCode);
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
			static int QueryLastSale();
			static void PersistSales();
			static void LoadSalesData();
		//funciones para el mantenimiento de tiendas***


		//funciones extra

	};
}		
