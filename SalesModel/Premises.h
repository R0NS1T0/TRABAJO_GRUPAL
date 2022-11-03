/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Premises {
    public:
        property int ID;
        property String^ Address;
    };
}