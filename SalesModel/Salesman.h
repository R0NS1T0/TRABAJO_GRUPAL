/**
 * Project Untitled
 */
#pragma once
#include "Employee.h"

using namespace System;

namespace SalesModel {
    public ref class Salesman : public Employee {
    public:
        property double SaleAmount;
    };
}