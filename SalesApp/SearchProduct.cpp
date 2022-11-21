#include "pch.h"
#include "SearchProduct.h"
#include "SaleForm.h"
#include "StockPerStore.h"

System::Void SalesApp::SearchProduct::dgvproducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		double productId = Convert::ToDouble(dgvproducts->Rows[e->RowIndex]->Cells[0]->Value->ToString());
		try {
		Product^ p = Controller::QueryProductByID(productId);
		((SaleForm^)refForm)->AddProducttoSalesDetail(p);
	}
		catch(InvalidCastException^ ex){
			double productId2 = Convert::ToDouble(dgvproducts->Rows[e->RowIndex]->Cells[0]->Value->ToString());
			Product^ p = Controller::QueryProductByID(productId2);
			((StockForm^)refForm)->AddProducttoSalesDetail(p);
		}
		finally {
		}
	}
	this->Close();

}
