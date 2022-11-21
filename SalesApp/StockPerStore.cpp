#include "pch.h"
#include "StockPerStore.h"
#include "StoreForm.h"

 System::Void SalesApp::StockForm::dgvStockperStore_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
 {
		 //si el cursor detecta algo en la columna visualizada
		 //definir el valor de variable
	 double productstock = 0;
	 for (int i = 0; i < dgvStockperStore->RowCount - 1; i++) {
		 productstock+= Convert::ToDouble(dgvStockperStore->Rows[e->RowIndex]->Cells[1]->Value->ToString());
	 }
		 ((StockForm^)refform)->RefreshTotalStock(productstock);
 }
