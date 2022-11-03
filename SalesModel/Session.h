/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace SalesModel {
  //clase dedicada a almacenar el usuario que ha iniciado sesión, en conjunto con datos relevantes
    public ref class Session {
    public:
        property String^ ActiveUser;
        property String^ Username;
        property String^ Lastname;
        property int authority;
    };
}