#include "pch.h"
#include "SearchProduct.h"
#include "SaleForm.h"

System::Void SalesApp::SearchProduct::dgvproducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ productId = dgvproducts->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Product^ p = Controller::QueryProductByID(productId);
		((SaleForm^)refForm)->AddProducttoSalesDetail(p);
	}
	this->Close();

}
