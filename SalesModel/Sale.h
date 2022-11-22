/**
 * Project Untitled
 */
#pragma once
#include "Salesman.h"
#include "Customer.h"
#include "SaleDetail.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    [Serializable]
    public ref class Sale {
    public:
        property int ID;
        property String^ Date;
        property String^ Time;
        property String^ Store;
        property char Status;
        property double TotalPrice;
        property double Amount;
        property String^ Salesman;
        property SaleDetail^ saleDetail;
        property String^ Customer;
        property List<SaleDetail^>^ SaleDetails;
    };
}