#include "pch.h"

#include "SalesController.h"

int SalesController::Controller::AddProduct(Product^ product)
{
    productList->Add(product);
    return 1;
}

int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (product->Code == productList[i]->Code) {
            productList[i] = product;
            return 1;
        }
    return 0;
}

int SalesController::Controller::DeleteProduct(int productCode)
{
    for (int i = 0; i < productList->Count; i++)
        if (productCode == productList[i]->Code) {
            productList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Status == 'A') {
            activeProductsList->Add(productList[i]);
        }
    }
    return activeProductsList;
}

Product^ SalesController::Controller::QueryProductById(int productCode)
{
    for (int i = 0; i < productList->Count; i++)
        if (productCode == productList[i]->Code) {
            return productList[i];
        }
    return nullptr;
}
