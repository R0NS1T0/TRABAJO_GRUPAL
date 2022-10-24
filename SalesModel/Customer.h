/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Customer {
    public:
        property String^ Name;
        property String^ DNI;
        property String^ LastName;
    };
}