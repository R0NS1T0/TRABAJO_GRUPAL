#pragma once
#include "SearchProduct.h"
namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
		Form^ refform;

	public:
		StockForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refform = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbstore;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvStockperStore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sucursal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::Button^ btnaddtoStore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductState;

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
			this->cmbstore = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvStockperStore = (gcnew System::Windows::Forms::DataGridView());
			this->sucursal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnaddtoStore = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStockperStore))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbstore
			// 
			this->cmbstore->FormattingEnabled = true;
			this->cmbstore->Location = System::Drawing::Point(39, 43);
			this->cmbstore->Name = L"cmbstore";
			this->cmbstore->Size = System::Drawing::Size(125, 24);
			this->cmbstore->TabIndex = 0;
			this->cmbstore->SelectedIndexChanged += gcnew System::EventHandler(this, &StockForm::cmbstore_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tienda";
			// 
			// dgvStockperStore
			// 
			this->dgvStockperStore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStockperStore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->sucursal,
					this->stock, this->ProductName, this->ProductState
			});
			this->dgvStockperStore->Location = System::Drawing::Point(39, 97);
			this->dgvStockperStore->Name = L"dgvStockperStore";
			this->dgvStockperStore->RowHeadersWidth = 51;
			this->dgvStockperStore->RowTemplate->Height = 24;
			this->dgvStockperStore->Size = System::Drawing::Size(500, 170);
			this->dgvStockperStore->TabIndex = 2;
			this->dgvStockperStore->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvStockperStore_CellValueChanged);
			// 
			// sucursal
			// 
			this->sucursal->HeaderText = L"sucursal";
			this->sucursal->MinimumWidth = 6;
			this->sucursal->Name = L"sucursal";
			this->sucursal->Width = 125;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->MinimumWidth = 6;
			this->stock->Name = L"stock";
			this->stock->Width = 125;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Producto";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 125;
			// 
			// ProductState
			// 
			this->ProductState->HeaderText = L"Estado";
			this->ProductState->MinimumWidth = 6;
			this->ProductState->Name = L"ProductState";
			this->ProductState->Width = 125;
			// 
			// btnaddtoStore
			// 
			this->btnaddtoStore->Location = System::Drawing::Point(220, 43);
			this->btnaddtoStore->Name = L"btnaddtoStore";
			this->btnaddtoStore->Size = System::Drawing::Size(149, 24);
			this->btnaddtoStore->TabIndex = 3;
			this->btnaddtoStore->Text = L"Añadir Producto";
			this->btnaddtoStore->UseVisualStyleBackColor = true;
			this->btnaddtoStore->Click += gcnew System::EventHandler(this, &StockForm::btnaddtoStore_Click);
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 295);
			this->Controls->Add(this->btnaddtoStore);
			this->Controls->Add(this->dgvStockperStore);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbstore);
			this->Name = L"StockForm";
			this->Text = L"Productos Por Tienda";
			this->Load += gcnew System::EventHandler(this, &StockForm::StockForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStockperStore))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void FillCmbStores() {
			cmbstore->Items->Clear();
			List <Store^>^ storeList = Controller::QueryAllStores();
			for (int i = 0; i < storeList->Count; i++) {
				cmbstore->Items->Add(storeList[i]->BranchID);
			}
		}
		public: Void AddProducttoSalesDetail(Product^ p) {
			//solo se esta tomando prestado el nombre de la función
			List<StoreProducts^>^ storestockList = Controller::QueryStoreProducts();
			int key = 0;
			
					dgvStockperStore->Rows->Add(gcnew array<String^> {
						cmbstore->Text,
							"1",
							p->Name,
							Convert::ToString(p->Status)
					});
					StoreProducts^ sp = gcnew StoreProducts();
					sp->Code = p->Code;
					sp->Color = p->Color;
					sp->Description = p->Description;
					sp->Name = p->Name;
					sp->Photo = p->Photo;
					sp->Price = p->Price;
					sp->Size = p->Size;
					sp->Status = p->Status;
					sp->Store = cmbstore->Text;
					Controller::addProductToStore(sp);
				
		}
		
		 public: Void RefreshTotalStock(double stock) {
					  StoreProducts^ sp = gcnew StoreProducts();
					  sp->Code = sp->Code;
					  sp->Color = sp->Color;
					  sp->Description = sp->Description;
					  sp->Name = sp->Name;
					  sp->Photo = sp->Photo;
					  sp->Price = sp->Price;
					  sp->Size = sp->Size;
					  sp->Status = sp->Status;
					  sp->Store = sp->Store;
					  sp->originalStock = stock;
					  sp->Stock = stock;	
					  Controller::addProductToStore(sp);
					  
				  }
public:

	void RefreshGrid() {
		List<StoreProducts^>^ storestockList = Controller::QueryStoreProducts();
		dgvStockperStore->Rows->Clear();
			for (int i = 0; i < storestockList->Count; i++) {
				if (cmbstore->Text == storestockList[i]->Store) {
					dgvStockperStore->Rows->Add(gcnew array<String^>{
							storestockList[i]->Store,
							"" + storestockList[i]->Stock,
							storestockList[i]->Name,
							Convert::ToString(storestockList[i]->Status)
					});
				}
		}
	}
		
	private: System::Void StockForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCmbStores();
		RefreshGrid();
		btnaddtoStore->Enabled = false;
	}
private: System::Void btnaddtoStore_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchProduct^ storeproductsform = gcnew SearchProduct(this);
	storeproductsform->ShowDialog();
}
private: System::Void dgvStockperStore_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	double productstock = 0;
	for (int i = 0; i < dgvStockperStore->RowCount - 1; i++) {
		productstock += Convert::ToDouble(dgvStockperStore->Rows[e->RowIndex]->Cells[1]->Value->ToString());
	}
	RefreshTotalStock(productstock);
	List<Store^>^ s = Controller::QueryAllStores();
	for (int i = 0; i < s->Count; i++) {
		if (cmbstore->Text == s[i]->BranchID) {
			s[i]->ID = s[i]->ID;
			s[i]->BranchID = s[i]->BranchID;
			s[i]->Address = s[i]->Address;
			s[i]->StockStore = productstock;

			Controller::UpdateStore(s[i]);
		}
	}
	
	//solo estoy haciendo una sumatoria para el stack general, después se enviará el dato requerido
}
private: System::Void cmbstore_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	btnaddtoStore->Enabled = true;
	RefreshGrid();
}
};
}
