/**
 * Project Untitled
 */
#pragma once
#include "Employee.h"

using namespace System;

namespace SalesModel {
    public ref class Administrator : public Employee {
    public:
        property int EmployeeNumber;
    };
}