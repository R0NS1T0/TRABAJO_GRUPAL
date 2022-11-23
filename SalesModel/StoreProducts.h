#pragma once
#pragma once

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class StoreProducts {
    public:
        property int Code;
        property String^ Name;      //para la funci�n de mantenimiento de productos no se va a usar esto por ahora
        property double Stock;
        property String^ Description;
        property double Price;
        property String^ Size;
        property String^ Color;
        property char Status;       //Para la funci�n de mantenimiento de productos no se va a usar esto por ahora
        property array<Byte>^ Photo;
        property String^ Store;
        property double originalStock;  //busca guardar el dato inicial de stock, con el fin de mostrar la funci�n moda.
    };
}