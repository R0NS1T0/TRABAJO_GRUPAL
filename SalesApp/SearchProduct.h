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
	/// Resumen de SearchProduct
	/// </summary>
	public ref class SearchProduct : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		SearchProduct(Form^ form)
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
		~SearchProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtCode;
	private: System::Windows::Forms::DataGridView^ dgvproducts;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->dgvproducts = (gcnew System::Windows::Forms::DataGridView());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvproducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(24, 76);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(117, 42);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &SearchProduct::btnSearch_Click);
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(91, 34);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(138, 22);
			this->txtCode->TabIndex = 2;
			// 
			// dgvproducts
			// 
			this->dgvproducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvproducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->codigo, this->nombre,
					this->precio, this->stock
			});
			this->dgvproducts->Location = System::Drawing::Point(12, 156);
			this->dgvproducts->Name = L"dgvproducts";
			this->dgvproducts->RowHeadersWidth = 51;
			this->dgvproducts->RowTemplate->Height = 24;
			this->dgvproducts->Size = System::Drawing::Size(500, 111);
			this->dgvproducts->TabIndex = 3;
			this->dgvproducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchProduct::dgvproducts_CellClick);
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"codigo";
			this->codigo->MinimumWidth = 6;
			this->codigo->Name = L"codigo";
			this->codigo->Width = 125;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->MinimumWidth = 6;
			this->nombre->Name = L"nombre";
			this->nombre->Width = 125;
			// 
			// precio
			// 
			this->precio->HeaderText = L"Precio";
			this->precio->MinimumWidth = 6;
			this->precio->Name = L"precio";
			this->precio->Width = 125;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->MinimumWidth = 6;
			this->stock->Name = L"stock";
			this->stock->Width = 125;
			// 
			// SearchProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(524, 290);
			this->Controls->Add(this->dgvproducts);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label1);
			this->Name = L"SearchProduct";
			this->Text = L"Buscar Producto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvproducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCode->Text->Trim() != "") {
			double productCode;
			productCode = Convert::ToDouble(txtCode->Text);
			Product^ p = Controller::QueryProductByID(productCode);
			//limpiar grid:
			dgvproducts->Rows->Clear();
			dgvproducts->Rows->Add(gcnew array<String^> {
					Convert::ToString(p->Code),
					p->Name,
					Convert::ToString(p->Price),
					Convert::ToString(p->Stock)
			});

		}
		else {
			//MessageBox::Show("Ingrese un código registrado");
			List<Product^>^ productList = Controller::QueryAllProducts();
			//Se borran los datos del grid.
			dgvproducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvproducts->Rows->Add(gcnew array<String^> {
					    Convert::ToString(productList[i]->Code),
						productList[i]->Name,
						Convert::ToString(productList[i]->Price),
						Convert::ToString(productList[i]->Stock)
				});
			}
		}
	}
	private: System::Void dgvproducts_CellClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
