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
		Form^ refForm;
	public:
		//este formulario está abierto a todo usuario, no implementar limitación por autoridad
		CustomerForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ accionesToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnsearch;
	private: System::Windows::Forms::ToolStripMenuItem^ añadirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ busquedaToolStripMenuItem;









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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->añadirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->busquedaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvCustomer
			// 
			this->dgvCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nombre, this->LastName,
					this->CustomerID
			});
			this->dgvCustomer->Location = System::Drawing::Point(12, 213);
			this->dgvCustomer->Name = L"dgvCustomer";
			this->dgvCustomer->RowHeadersWidth = 51;
			this->dgvCustomer->RowTemplate->Height = 24;
			this->dgvCustomer->Size = System::Drawing::Size(665, 210);
			this->dgvCustomer->TabIndex = 0;
			this->dgvCustomer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCustomer_CellClick);
			this->dgvCustomer->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCustomer_CellContentClick);
			this->dgvCustomer->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCustomer_CellContentDoubleClick);
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
			this->btnAdd->Location = System::Drawing::Point(26, 158);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(95, 26);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CustomerForm::btnAdd_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(185, 158);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(99, 29);
			this->btnModify->TabIndex = 2;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &CustomerForm::btnModify_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(353, 159);
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
			this->label1->Location = System::Drawing::Point(35, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"DNI";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(117, 54);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 22);
			this->txtName->TabIndex = 6;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(117, 86);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 22);
			this->txtDNI->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(266, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Apellido";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(353, 54);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(100, 22);
			this->txtLastName->TabIndex = 9;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(689, 28);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accionesToolStripMenuItem
			// 
			this->accionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->añadirToolStripMenuItem,
					this->modificarToolStripMenuItem, this->busquedaToolStripMenuItem
			});
			this->accionesToolStripMenuItem->Name = L"accionesToolStripMenuItem";
			this->accionesToolStripMenuItem->Size = System::Drawing::Size(80, 24);
			this->accionesToolStripMenuItem->Text = L"acciones";
			// 
			// añadirToolStripMenuItem
			// 
			this->añadirToolStripMenuItem->Name = L"añadirToolStripMenuItem";
			this->añadirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->añadirToolStripMenuItem->Text = L"añadir";
			this->añadirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::añadirToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->modificarToolStripMenuItem->Text = L"modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::modificarToolStripMenuItem_Click);
			// 
			// busquedaToolStripMenuItem
			// 
			this->busquedaToolStripMenuItem->Name = L"busquedaToolStripMenuItem";
			this->busquedaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->busquedaToolStripMenuItem->Text = L"busqueda";
			this->busquedaToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::busquedaToolStripMenuItem_Click);
			// 
			// btnsearch
			// 
			this->btnsearch->Location = System::Drawing::Point(491, 57);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(75, 23);
			this->btnsearch->TabIndex = 11;
			this->btnsearch->Text = L"buscar";
			this->btnsearch->UseVisualStyleBackColor = true;
			this->btnsearch->Click += gcnew System::EventHandler(this, &CustomerForm::btnsearch_Click);
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 435);
			this->Controls->Add(this->btnsearch);
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
			this->Controls->Add(this->menuStrip1);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
	int key = 0;
	List <Customer^>^ activeclients = Controller::QueryAllCustomers();
	for (int i = 0; 0 < activeclients->Count; i++) {
		if ((txtDNI->Text != activeclients[i]->DNI)) {
			key = 1;
		}
	}
	if (key == 1) {
		c->Name = txtName->Text;
		c->LastName = txtLastName->Text;
		c->DNI = txtDNI->Text;

		Controller::AddCustomer(c);
		ClearControls();
		RefreshGrid();
	}
}
private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	Customer^ c = gcnew Customer();
	int key = 0;
	List <Customer^>^ activeclients = Controller::QueryAllCustomers();
	for (int i = 0; 0 < activeclients->Count; i++) {
		if ((txtDNI->Text != activeclients[i]->DNI)) {
			key = 1;
		}
	}
	if (key == 1) {
		c->Name = txtName->Text;
		c->LastName = txtLastName->Text;
		c->DNI = txtDNI->Text;

		Controller::UpdateCustomer(c);
		ClearControls();
		RefreshGrid();
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CustomerName = txtName->Text;
	Controller::DeleteCustomer(CustomerName);
	RefreshGrid();
}
private: System::Void dgvCustomer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
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
	btnAdd->Enabled = false;
	btnDelete->Enabled = false;
	btnModify->Enabled = false;
	btnsearch->Enabled = false;
}
private: System::Void dgvCustomer_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);


private: System::Void añadirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = true;
	btnDelete->Enabled = false;
	btnModify->Enabled = false;
	btnsearch->Enabled = false;
}
private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnDelete->Enabled = true;
	btnModify->Enabled = true;
	btnsearch->Enabled = false;
}
private: System::Void busquedaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//controlador para ventas
	btnAdd->Enabled = false;
	btnDelete->Enabled = false;
	btnModify->Enabled = false;
	btnsearch->Enabled = true;
}
private: System::Void btnsearch_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
