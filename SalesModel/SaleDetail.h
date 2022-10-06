/**
 * Project Untitled
 */
#pragma once
#include "Product.h"

using namespace System;

namespace SalesModel {
    public ref class SaleDetail {
    public:
        property int Id;
        property int Quantity;
        property double UnitPrice;
        property double TotalProduct;
        property Product^ Product;
    };
}