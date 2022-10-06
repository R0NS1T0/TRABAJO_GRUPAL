#pragma once

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class Controller
	{
		private:
			static List <Product^>^ productList = gcnew List<Product^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			static int AddProduct(Product^ product);
			static int UpdateProduct(Product^ product);
			static int DeleteProduct(int productCode);
			static List <Product^>^ QueryAllProducts();
			static Product^ QueryProductById(int productCode);
	};
}		
