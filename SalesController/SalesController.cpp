#include "pch.h"

#include "SalesController.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;
using namespace System::IO;

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
    Employee^ employee;
    if (CompanyUser == "grupo5" && Password == "LPOO") {
        employee = gcnew Employee();
        employee->Name = "Usuario de prueba";
        employee->Email = "emaildeprueba@pucp.edu.pe";
        employee->Address = "San Miguel Urbanizacion Las Gardenias";
        employee->DocumentNumber = "98123971";
        employee->PhoneNumber = "987675185";
        employee->CompanyUser = "grupo5";
    }
    return employee;
}
