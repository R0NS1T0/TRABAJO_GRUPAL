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
    public ref class Sale {
    public:
        property int ID;
        property String^ Date;
        property char Status;
        property double TotalPrice;
        property Salesman^ Salesman;
        property Customer^ Customer;
        property List<SaleDetail^>^ SaleDetails;
    };
}