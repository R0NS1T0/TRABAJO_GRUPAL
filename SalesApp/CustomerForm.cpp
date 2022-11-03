#include "pch.h"
#include "CustomerForm.h"
#include "SaleForm.h"

System::Void SalesApp::CustomerForm::dgvCustomer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int SelectedRowIndex = dgvCustomer->SelectedCells[0]->RowIndex;
	String^ CustomerName = dgvCustomer->Rows[SelectedRowIndex]->Cells[0]->Value->ToString();
	Customer^ c = Controller::QueryCustomerbyName(CustomerName);

	txtName->Text = c->Name;
	txtLastName->Text = c->LastName;
	txtDNI->Text = c->DNI;

}

System::Void SalesApp::CustomerForm::dgvCustomer_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ customerId = dgvCustomer->Rows[e->RowIndex]->Cells[2]->Value->ToString();
		Customer^ c = Controller::QueryCustomersbyDNI(customerId);
		((SaleForm^)refForm)->AddCustomerToSaleDetail(c);
	}
	this->Close();

}
