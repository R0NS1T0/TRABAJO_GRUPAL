#include "pch.h"
#include "StockPerStore.h"
#include "StoreForm.h"

 System::Void SalesApp::StockForm::dgvStockperStore_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
 {	 
	 double productstock = 0;
	 for (int i = 0; i < dgvStockperStore->RowCount - 1; i++) {
		 productstock+= Convert::ToDouble(dgvStockperStore->Rows[e->RowIndex]->Cells[1]->Value->ToString());
	 }	
	 ((StockForm^)refform)->RefreshTotalStock(productstock);
	 //solo estoy haciendo una sumatoria para el stack general, después se enviará el dato requerido
 }
