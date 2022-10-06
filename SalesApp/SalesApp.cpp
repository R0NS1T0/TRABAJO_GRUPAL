#include "pch.h"
#include "SalesMainForm.h"

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args){

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //SalesApp is your project name
    SalesApp::SalesMainForm form;
    Application::Run(% form);

    /*
    Product^ p1 = gcnew Product();
    p1->Code = 1;
    p1->Description = "Polo";
    p1->Size = "Large";
    p1->Color = "Blue";
    p1->Price = 80;
    p1->Stock = 30;
    //p1->Photo = "";
    
    Product^ p2 = gcnew Product();
    p2->Code = 2;
    p2->Description = "Pantalon";
    p2->Size = "Small";
    p2->Color = "Red";
    p2->Price = 120;
    p1->Stock = 25;
    //p1->Photo = "";

    Customer^ c1 = gcnew Customer();
    c1->DNI = "572752782";
    c1->Name = "Jorge";

    Salesman^ s1 = gcnew Salesman();
    s1->CompanyUser = "Vender";
    s1->Password = "vender123";
    s1->AuthorityClass = 3;
    s1->Name = "Vendedor 1";
    s1->Gender = 'M';
    s1->DocumentNumber = "444444";
    s1->PhoneNumber = "987654321";
    s1->Address = "Las vegonias 250";
    s1->Email = "Vendedor.1.com";
    s1->Status = 'S';
    s1->Birthday = "15-09-02";
    s1->SaleAmount = 3000;

    //Simulación de una venta
    Sale^ sale1 = gcnew Sale();
    sale1->ID = 1;
    sale1->Date = "20220912";
    sale1->TotalPrice = 0;
    sale1->Status = 'A';
    sale1->Salesman = s1;
    sale1->Customer = c1;

    sale1->SaleDetails = gcnew List<SaleDetail^>();
    sale1->SaleDetails->Add(gcnew SaleDetail());
    sale1->SaleDetails[0]->Id = 1;  
    sale1->SaleDetails[0]->Product = p1;
    sale1->SaleDetails[0]->Quantity = 2;
    sale1->SaleDetails[0]->UnitPrice = p1->Price * 0.75;
    sale1->SaleDetails[0]->TotalProduct = sale1->SaleDetails[0]->Quantity *
        sale1->SaleDetails[0]->UnitPrice;
    sale1->SaleDetails->Add(gcnew SaleDetail());
    sale1->SaleDetails[1]->Id = 2;
    sale1->SaleDetails[1]->Product = p2;
    sale1->SaleDetails[1]->Quantity = 4;
    sale1->SaleDetails[1]->UnitPrice = sale1->SaleDetails[1]->Product->Price * 0.85;
    sale1->SaleDetails[1]->TotalProduct = sale1->SaleDetails[1]->Quantity *
        sale1->SaleDetails[1]->UnitPrice;

    for (int i = 0; i < sale1->SaleDetails->Count; i++)
        sale1->TotalPrice += sale1->SaleDetails[i]->TotalProduct;

    //Emisión de reporte de la venta realizada
    Console::WriteLine("Reporte de la venta:\n");
    Console::WriteLine("Fecha: " + sale1->Date);
    Console::WriteLine("Vendedor: " + sale1->Salesman->Name);
    Console::WriteLine("Cliente (DNI y nombre): " + sale1->Customer->DNI + " - " + sale1->Customer->Name);
    Console::WriteLine("Detalles de venta:");
    for (int i = 0; i < sale1->SaleDetails->Count; i++) {

        Console::WriteLine((i + 1) + " - " + sale1->SaleDetails[i]->Product->Code
            + " P.U.= " + sale1->SaleDetails[i]->Product->Price
            + " Cant.= " + sale1->SaleDetails[i]->Quantity
            + " Subtotal= " + sale1->SaleDetails[i]->TotalProduct);
    }

    Console::WriteLine("El total de la venta es: " + sale1->TotalPrice);
    */
    return 0;
}
