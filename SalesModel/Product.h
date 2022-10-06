/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace SalesModel {
    public ref class Product {
    public:
        property int Code;
        property String^ Name;
        property double Stock;
        property String^ Description;
        property double Price;
        property String^ Size;
        property String^ Color;
        property char Status;
        property array<Byte>^ Photo;
    };
}