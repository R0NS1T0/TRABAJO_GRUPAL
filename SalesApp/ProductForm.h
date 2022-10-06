#pragma once

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
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dgvProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ producName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productStock;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtCode;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtColor;

	private: System::Windows::Forms::TextBox^ txtSize;


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
			this->nuevoProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvProduct = (gcnew System::Windows::Forms::DataGridView());
			this->ProductId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->producName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtSize = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(576, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoProductoToolStripMenuItem,
					this->modificarProductoToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoProductoToolStripMenuItem
			// 
			this->nuevoProductoToolStripMenuItem->Name = L"nuevoProductoToolStripMenuItem";
			this->nuevoProductoToolStripMenuItem->Size = System::Drawing::Size(221, 26);
			this->nuevoProductoToolStripMenuItem->Text = L"Nuevo producto";
			// 
			// modificarProductoToolStripMenuItem
			// 
			this->modificarProductoToolStripMenuItem->Name = L"modificarProductoToolStripMenuItem";
			this->modificarProductoToolStripMenuItem->Size = System::Drawing::Size(221, 26);
			this->modificarProductoToolStripMenuItem->Text = L"Modificar producto";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(221, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// dgvProduct
			// 
			this->dgvProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ProductId,
					this->producName, this->productPrice, this->productStock
			});
			this->dgvProduct->Location = System::Drawing::Point(43, 342);
			this->dgvProduct->Name = L"dgvProduct";
			this->dgvProduct->RowHeadersWidth = 51;
			this->dgvProduct->RowTemplate->Height = 24;
			this->dgvProduct->Size = System::Drawing::Size(486, 150);
			this->dgvProduct->TabIndex = 30;
			this->dgvProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProduct_CellClick);
			// 
			// ProductId
			// 
			this->ProductId->HeaderText = L"Id";
			this->ProductId->MinimumWidth = 6;
			this->ProductId->Name = L"ProductId";
			this->ProductId->Width = 50;
			// 
			// producName
			// 
			this->producName->HeaderText = L"Nombre";
			this->producName->MinimumWidth = 6;
			this->producName->Name = L"producName";
			this->producName->Width = 225;
			// 
			// productPrice
			// 
			this->productPrice->HeaderText = L"Precio";
			this->productPrice->MinimumWidth = 6;
			this->productPrice->Name = L"productPrice";
			this->productPrice->Width = 80;
			// 
			// productStock
			// 
			this->productStock->HeaderText = L"Stock";
			this->productStock->MinimumWidth = 6;
			this->productStock->Name = L"productStock";
			this->productStock->Width = 80;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(267, 294);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(105, 32);
			this->btnDelete->TabIndex = 29;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(156, 294);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(105, 32);
			this->btnUpdate->TabIndex = 28;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(43, 294);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(107, 32);
			this->btnAdd->TabIndex = 27;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(392, 55);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(136, 165);
			this->pbPhoto->TabIndex = 26;
			this->pbPhoto->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Precio";
			this->label4->Click += gcnew System::EventHandler(this, &ProductForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Descripcion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Nombre";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(148, 254);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 22);
			this->txtStock->TabIndex = 23;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(148, 226);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 22);
			this->txtPrice->TabIndex = 22;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(148, 111);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(216, 53);
			this->txtDescription->TabIndex = 19;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(148, 83);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(216, 22);
			this->txtName->TabIndex = 18;
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(148, 55);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(100, 22);
			this->txtCode->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Code";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Color";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Talla";
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(148, 198);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(100, 22);
			this->txtColor->TabIndex = 21;
			// 
			// txtSize
			// 
			this->txtSize->Location = System::Drawing::Point(148, 170);
			this->txtSize->Name = L"txtSize";
			this->txtSize->Size = System::Drawing::Size(100, 22);
			this->txtSize->TabIndex = 20;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 504);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtSize);
			this->Controls->Add(this->dgvProduct);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ProductForm";
			this->Text = L"Mantenimiento de productos";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public:
		void RefreshGrid() {
			List<Product^>^ productList = Controller::QueryAllProducts();
			dgvProduct->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvProduct->Rows->Add(gcnew array<String^>{
					"" + productList[i]->Code,
						productList[i]->Name,
						"" + productList[i]->Price,
						"" + productList[i]->Stock
				});
			}
		}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ p = gcnew Product();
	p->Code = Int32::Parse(txtCode->Text);
	p->Name = txtName->Text;
	p->Description = txtDescription->Text;
	p->Size = txtSize->Text;
	p->Color = txtColor->Text;
	p->Price = Double::Parse(txtPrice->Text);
	p->Stock = Int32::Parse(txtStock->Text);
	p->Status = 'A';
	Controller::AddProduct(p);
	RefreshGrid();
	ClearControls();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ p = gcnew Product();
	p->Code = Int32::Parse(txtCode->Text);
	p->Name = txtName->Text;
	p->Description = txtDescription->Text;
	p->Size = txtSize->Text;
	p->Color = txtColor->Text;
	p->Price = Double::Parse(txtPrice->Text);
	p->Stock = Int32::Parse(txtStock->Text);
	p->Status = 'A';
	Controller::UpdateProduct(p);
	RefreshGrid();
	ClearControls();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = Int32::Parse(txtCode->Text);
	Controller::DeleteProduct(productId);
	RefreshGrid();
}
private: System::Void dgvProduct_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvProduct->SelectedCells[0]->RowIndex;
	int productId = Int32::Parse(dgvProduct->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Product^ p = Controller::QueryProductById(productId);

	txtCode->Text = "" + p->Code;
	txtName->Text = p->Name;
	txtDescription->Text = p->Description;
	txtSize->Text = p->Size;
	txtColor->Text = p->Color;
	txtPrice->Text = "" + p->Price;
	txtStock->Text = "" + p->Stock;
}

	   void ClearControls() {
		   txtCode->Clear();
		   txtName->Clear();
		   txtDescription->Clear();
		   txtSize->Clear();
		   txtColor->Clear();
		   txtPrice->Clear();
		   txtStock->Clear();
	   }

};
}
