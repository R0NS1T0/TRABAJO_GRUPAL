#pragma once
#include "StockPerStore.h"

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de StoreForm
	/// </summary>
	public ref class StoreForm : public System::Windows::Forms::Form
	{
	public:
		StoreForm(void)
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
		~StoreForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtStoreStock;


	private: System::Windows::Forms::TextBox^ txtAddress;





	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvStore;
	private: System::Windows::Forms::TextBox^ txtBranchID;






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ storeId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ storestock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ storeBranchId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ storeAddress;















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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtStoreStock = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvStore = (gcnew System::Windows::Forms::DataGridView());
			this->storeId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->storestock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->storeBranchId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->storeAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtBranchID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(752, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->agregarToolStripMenuItem,
					this->modificarToolStripMenuItem, this->eliminarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// agregarToolStripMenuItem
			// 
			this->agregarToolStripMenuItem->Name = L"agregarToolStripMenuItem";
			this->agregarToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->agregarToolStripMenuItem->Text = L"Agregar";
			this->agregarToolStripMenuItem->Click += gcnew System::EventHandler(this, &StoreForm::agregarToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &StoreForm::modificarToolStripMenuItem_Click);
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->eliminarToolStripMenuItem->Text = L"Salir";
			this->eliminarToolStripMenuItem->Click += gcnew System::EventHandler(this, &StoreForm::eliminarToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Stock general de productos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Dirección:";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(124, 83);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(111, 22);
			this->txtID->TabIndex = 9;
			// 
			// txtStoreStock
			// 
			this->txtStoreStock->Location = System::Drawing::Point(237, 154);
			this->txtStoreStock->Name = L"txtStoreStock";
			this->txtStoreStock->ReadOnly = true;
			this->txtStoreStock->Size = System::Drawing::Size(65, 22);
			this->txtStoreStock->TabIndex = 10;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(124, 191);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(227, 54);
			this->txtAddress->TabIndex = 12;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(113, 274);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(155, 25);
			this->btnAdd->TabIndex = 19;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &StoreForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(302, 276);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(163, 23);
			this->btnUpdate->TabIndex = 20;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StoreForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(510, 276);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(154, 23);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &StoreForm::btnDelete_Click);
			// 
			// dgvStore
			// 
			this->dgvStore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->storeId, this->storestock,
					this->storeBranchId, this->storeAddress
			});
			this->dgvStore->Location = System::Drawing::Point(28, 328);
			this->dgvStore->Name = L"dgvStore";
			this->dgvStore->RowHeadersWidth = 51;
			this->dgvStore->RowTemplate->Height = 24;
			this->dgvStore->Size = System::Drawing::Size(697, 150);
			this->dgvStore->TabIndex = 22;
			this->dgvStore->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreForm::dgvStore_CellClick);
			this->dgvStore->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreForm::dgvStore_CellContentClick);
			// 
			// storeId
			// 
			this->storeId->HeaderText = L"Código";
			this->storeId->MinimumWidth = 6;
			this->storeId->Name = L"storeId";
			this->storeId->Width = 90;
			// 
			// storestock
			// 
			this->storestock->HeaderText = L"stock general";
			this->storestock->MinimumWidth = 6;
			this->storestock->Name = L"storestock";
			this->storestock->Width = 90;
			// 
			// storeBranchId
			// 
			this->storeBranchId->HeaderText = L"Sucursal";
			this->storeBranchId->MinimumWidth = 6;
			this->storeBranchId->Name = L"storeBranchId";
			this->storeBranchId->Width = 140;
			// 
			// storeAddress
			// 
			this->storeAddress->HeaderText = L"Dirección";
			this->storeAddress->MinimumWidth = 6;
			this->storeAddress->Name = L"storeAddress";
			this->storeAddress->Width = 270;
			// 
			// txtBranchID
			// 
			this->txtBranchID->Location = System::Drawing::Point(124, 119);
			this->txtBranchID->Name = L"txtBranchID";
			this->txtBranchID->Size = System::Drawing::Size(109, 22);
			this->txtBranchID->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Sucursal";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(436, 229);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(198, 16);
			this->linkLabel1->TabIndex = 25;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Ver disponibilidad de productos";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &StoreForm::linkLabel1_LinkClicked);
			// 
			// StoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 530);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->txtBranchID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvStore);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtStoreStock);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StoreForm";
			this->Text = L"Mantenimiento de tiendas";
			this->Load += gcnew System::EventHandler(this, &StoreForm::StoreForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void RefreshGrid() {
			List<Store^>^ storeList = Controller::QueryAllStores();
			dgvStore->Rows->Clear();
			for (int i = 0; i < storeList->Count; i++) {
				dgvStore->Rows->Add(gcnew array<String^>{
					""+ storeList[i]->ID,		
						"" + storeList[i]->StockStore,	
						storeList[i]->BranchID,		
						storeList[i]->Address,		
				});

			}
		}
		void ClearControls() {
			txtID->Clear();
			txtStoreStock->Clear();
			txtBranchID->Clear();
			txtAddress->Clear();
		}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Store^ s = gcnew Store();
		
		s->ID = Int32::Parse(txtID->Text);					
		//s->StockStore = Double::Parse(txtStoreStock->Text);			//en base al link, se va a asignar de una variable heredada, implementación en curso
		s->BranchID = txtBranchID->Text;					
		s->Address = txtAddress->Text;
		Controller::AddStore(s);
		RefreshGrid();
		ClearControls();
	}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Store^ s = gcnew Store();
	s->ID = Int32::Parse(txtID->Text);
	//s->StockStore = Double::Parse(txtStoreStock->Text);			//en base al link, se va a asignar de una variable heredada, implementacion en curso
	s->BranchID = txtBranchID->Text;
	s->Address = txtAddress->Text;
	Controller::UpdateStore(s);
	RefreshGrid();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int storeID = Int32::Parse(txtID->Text);
	Controller::DeleteStore(storeID);
	RefreshGrid();
	ClearControls();
}
private: System::Void dgvStore_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int SelectedRowIndex = dgvStore->SelectedCells[0]->RowIndex;
	int storeID = Int32::Parse(dgvStore->Rows[SelectedRowIndex]->Cells[0]->Value->ToString());
	Store^ s = Controller::QueryStoreByID(storeID);

	txtID->Text = "" + s->ID;
	txtStoreStock->Text = "" + s->StockStore;
	txtBranchID->Text = s->BranchID;
	txtAddress->Text = s->Address;

}
private: System::Void dgvStore_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvStore->CurrentCell != nullptr &&
		dgvStore->CurrentCell->Value != nullptr &&
		dgvStore->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvStore->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvStore->Rows[selectedrowindex];
		int storeID = Int32::Parse(selectedRow->Cells[0]->Value->ToString());

		Store^ s = Controller::QueryStoreByID(storeID);
		txtID->Text = "" + s->ID;
		txtStoreStock->Text = "" + s->StockStore;
		txtBranchID->Text = s->BranchID;
		txtAddress->Text = s->Address;


	}
	
}
private: System::Void StoreForm_Load(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnDelete->Enabled = false;
	btnUpdate->Enabled = false;
	RefreshGrid();
}
private: System::Void agregarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Session^ logged = gcnew Session();
	logged = Controller::rememberdata();
	if (logged->authority == 1) {
		btnAdd->Enabled = true;
		btnDelete->Enabled = false;
		btnUpdate->Enabled = false;
	}
}
private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Session^ logged = gcnew Session();
	logged = Controller::rememberdata();
	if(logged->authority == 1) {
		btnAdd->Enabled = false;
		btnDelete->Enabled = true;
		btnUpdate->Enabled = true;
	}
}
private: System::Void eliminarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	//lo adecuado es actualizar el almacén de cada tienda en base a un ID propio de cada tienda
	//el stock general de cada tienda NO se asigna, debe ser determinado por el administrador
	Session^ logged = gcnew Session();
	logged = Controller::rememberdata();
	if (logged->authority == 1) {
		StockForm^ stockform = gcnew StockForm(this);
		stockform->ShowDialog();
		//acceder a la sección donde se asigna el producto
	}
	else {
		MessageBox::Show("acceso limitado a administradores");
	}
}
};
}
