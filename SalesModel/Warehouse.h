/**
 * Project Untitled
 */
#pragma once
#include "Premises.h"

using namespace System;

namespace SalesModel {
    public ref class Warehouse : public Premises {
    public:
        property double TotalStock;
        property String^ BranchID;
    };
}