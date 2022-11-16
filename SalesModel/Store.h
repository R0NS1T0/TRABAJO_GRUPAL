/**
 * Project Untitled
 */
#pragma once
#include "Premises.h"

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Store : public Premises {
    public:
        property String^ BranchID;
        property double StockStore;
        property Double currentsalesonstore;//se busca guardar una cantidad fija en alguna tienda para así cargarlo en los gráficos
        property Double storeamountsold;
    };
}