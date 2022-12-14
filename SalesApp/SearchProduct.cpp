#include "pch.h"
#include "SearchProduct.h"
#include "SaleForm.h"
#include "StockPerStore.h"

System::Void SalesApp::SearchProduct::dgvproducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		int productId = Convert::ToInt16(dgvproducts->Rows[e->RowIndex]->Cells[0]->Value->ToString());
		try {
		Product^ p = Controller::QueryProductByID(productId);
		((SaleForm^)refForm)->AddProducttoSalesDetail(p);
	}
		catch(InvalidCastException^ ex){
			int productId2 = Convert::ToInt16(dgvproducts->Rows[e->RowIndex]->Cells[0]->Value->ToString());
			Product^ p = Controller::QueryProductByID(productId2);
			((StockForm^)refForm)->AddProducttoSalesDetail(p);
		}
		finally {
		}
	}
	this->Close();

}
