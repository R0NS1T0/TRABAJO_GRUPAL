#pragma once

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvCustomer;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDNI;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerID;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCustomer
			// 
			this->dgvCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nombre, this->LastName,
					this->CustomerID
			});
			this->dgvCustomer->Location = System::Drawing::Point(12, 153);
			this->dgvCustomer->Name = L"dgvCustomer";
			this->dgvCustomer->RowHeadersWidth = 51;
			this->dgvCustomer->RowTemplate->Height = 24;
			this->dgvCustomer->Size = System::Drawing::Size(540, 168);
			this->dgvCustomer->TabIndex = 0;
			this->dgvCustomer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCustomer_CellClick);
			this->dgvCustomer->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCustomer_CellContentClick);
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->MinimumWidth = 6;
			this->nombre->Name = L"nombre";
			this->nombre->Width = 125;
			// 
			// LastName
			// 
			this->LastName->HeaderText = L"Apellido";
			this->LastName->MinimumWidth = 6;
			this->LastName->Name = L"LastName";
			this->LastName->Width = 125;
			// 
			// CustomerID
			// 
			this->CustomerID->HeaderText = L"DNI";
			this->CustomerID->MinimumWidth = 6;
			this->CustomerID->Name = L"CustomerID";
			this->CustomerID->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(50, 108);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(95, 26);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CustomerForm::btnAdd_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(209, 108);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(99, 29);
			this->btnModify->TabIndex = 2;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &CustomerForm::btnModify_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(377, 109);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(96, 28);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CustomerForm::btnDelete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"DNI";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(128, 39);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 22);
			this->txtName->TabIndex = 6;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(128, 71);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 22);
			this->txtDNI->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(277, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Apellido";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(364, 39);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(100, 22);
			this->txtLastName->TabIndex = 9;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 333);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvCustomer);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	public:
		void RefreshGrid() {
			List<Customer^>^ customerList = Controller::QueryAllCustomers();
			dgvCustomer->Rows->Clear();
			for (int i = 0; i < customerList->Count; i++) {
				dgvCustomer->Rows->Add(gcnew array<String^>{
					customerList[i]->Name,			//codigo
						customerList[i]->LastName,			//talla
						customerList[i]->DNI,	//descripción
				});

			}
		}

		void ClearControls() {
			txtName->Clear();
			txtLastName->Clear();
			txtDNI->Clear();
			
		}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Customer^ c = gcnew Customer();
	c->Name = txtName->Text;
	c->LastName = txtLastName->Text;
	c->DNI = txtDNI->Text;

	Controller::AddCustomer(c);
	ClearControls();
	RefreshGrid();
}
private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	Customer^ c = gcnew Customer();
	c->Name = txtName->Text;
	c->LastName = txtLastName->Text;
	c->DNI = txtDNI->Text;

	Controller::UpdateCustomer(c);
	ClearControls();
	RefreshGrid();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CustomerName = txtName->Text;
	Controller::DeleteProduct(CustomerName);
	RefreshGrid();
}
private: System::Void dgvCustomer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int SelectedRowIndex = dgvCustomer->SelectedCells[0]->RowIndex;
	String^ CustomerName = dgvCustomer->Rows[SelectedRowIndex]->Cells[0]->Value->ToString();
	Customer^ c = Controller::QueryCustomerbyName(CustomerName);

	txtName->Text = c->Name;
	txtLastName->Text = c->LastName;
	txtDNI->Text = c->DNI;
}
private: System::Void dgvCustomer_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCustomer->CurrentCell != nullptr &&
		dgvCustomer->CurrentCell->Value != nullptr &&
		dgvCustomer->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvCustomer->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCustomer->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		String^ CustomerID = a;
		Customer^ s = Controller::QueryCustomerbyName(CustomerID);
		txtName->Text = s->Name;
		txtLastName->Text = s->LastName;
		txtDNI->Text = s->DNI;
	}
}
private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
