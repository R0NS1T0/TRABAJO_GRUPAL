/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Employee {
    public:
        property String^ CompanyUser;
        property String^ Password;
        property int AuthorityClass;
        property String^ Name;
        property String^ LastName;
        property String^ Gender;
        property String^ DocumentNumber;
        property String^ PhoneNumber;
        property String^ Address;
        property String^ Email;
        property char Status;
        property String^ Birthday;
    };
}