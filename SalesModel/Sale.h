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
        property double ID;
        property String^ Date;
        property char Status;
        property String^ Store;
        property double TotalPrice;
        property double Amount;
        property String^ Salesman;
        property String^ Customer;
        property List<SaleDetail^>^ SaleDetails;

    };
}