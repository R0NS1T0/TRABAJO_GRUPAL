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
		//no requiere condición de acceso por autoridad
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
	private: System::Windows::Forms::DataGridView^ dgvWarehouse;





	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pbPhoto;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtDescription;

	private: System::Windows::Forms::TextBox^ txtCode;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtColor;

	private: System::Windows::Forms::TextBox^ txtSize;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnPhoto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productSize;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ producDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productColor;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtStatus;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->dgvWarehouse = (gcnew System::Windows::Forms::DataGridView());
			this->ProductCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productSize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->producDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productColor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtSize = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWarehouse))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(1056, 28);
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
			this->nuevoProductoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->nuevoProductoToolStripMenuItem->Text = L"Nuevo producto";
			this->nuevoProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::nuevoProductoToolStripMenuItem_Click);
			// 
			// modificarProductoToolStripMenuItem
			// 
			this->modificarProductoToolStripMenuItem->Name = L"modificarProductoToolStripMenuItem";
			this->modificarProductoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->modificarProductoToolStripMenuItem->Text = L"Modificar producto";
			this->modificarProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::modificarProductoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::salirToolStripMenuItem_Click);
			// 
			// dgvWarehouse
			// 
			this->dgvWarehouse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWarehouse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ProductCode,
					this->productPrice, this->productSize, this->productStock, this->producDescription, this->productColor
			});
			this->dgvWarehouse->Location = System::Drawing::Point(40, 402);
			this->dgvWarehouse->Margin = System::Windows::Forms::Padding(4);
			this->dgvWarehouse->Name = L"dgvWarehouse";
			this->dgvWarehouse->RowHeadersWidth = 51;
			this->dgvWarehouse->RowTemplate->Height = 24;
			this->dgvWarehouse->Size = System::Drawing::Size(983, 185);
			this->dgvWarehouse->TabIndex = 30;
			this->dgvWarehouse->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvWarehouse_CellClick);
			this->dgvWarehouse->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvWarehouse_CellContentClick);
			// 
			// ProductCode
			// 
			this->ProductCode->HeaderText = L"Codigo";
			this->ProductCode->MinimumWidth = 6;
			this->ProductCode->Name = L"ProductCode";
			this->ProductCode->Width = 70;
			// 
			// productPrice
			// 
			this->productPrice->HeaderText = L"Precio";
			this->productPrice->MinimumWidth = 6;
			this->productPrice->Name = L"productPrice";
			this->productPrice->Width = 80;
			// 
			// productSize
			// 
			this->productSize->HeaderText = L"Talla";
			this->productSize->MinimumWidth = 6;
			this->productSize->Name = L"productSize";
			this->productSize->Width = 80;
			// 
			// productStock
			// 
			this->productStock->HeaderText = L"Stock";
			this->productStock->MinimumWidth = 6;
			this->productStock->Name = L"productStock";
			this->productStock->Width = 125;
			// 
			// producDescription
			// 
			this->producDescription->HeaderText = L"Descripcion";
			this->producDescription->MinimumWidth = 6;
			this->producDescription->Name = L"producDescription";
			this->producDescription->Width = 225;
			// 
			// productColor
			// 
			this->productColor->HeaderText = L"Color";
			this->productColor->MinimumWidth = 6;
			this->productColor->Name = L"productColor";
			this->productColor->Width = 125;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(541, 349);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(105, 32);
			this->btnDelete->TabIndex = 29;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(379, 349);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(105, 32);
			this->btnUpdate->TabIndex = 28;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(209, 349);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(107, 32);
			this->btnAdd->TabIndex = 27;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(474, 64);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(181, 186);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 26;
			this->pbPhoto->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(86, 304);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 158);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Precio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 95);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Descripcion";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(148, 301);
			this->txtStock->Margin = System::Windows::Forms::Padding(4);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 22);
			this->txtStock->TabIndex = 23;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(148, 155);
			this->txtPrice->Margin = System::Windows::Forms::Padding(4);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 22);
			this->txtPrice->TabIndex = 22;
			this->txtPrice->TextChanged += gcnew System::EventHandler(this, &ProductForm::txtPrice_TextChanged);
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(148, 92);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(216, 53);
			this->txtDescription->TabIndex = 19;
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(148, 58);
			this->txtCode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(100, 22);
			this->txtCode->TabIndex = 17;
			this->txtCode->TextChanged += gcnew System::EventHandler(this, &ProductForm::txtCode_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Codigo";
			this->label1->Click += gcnew System::EventHandler(this, &ProductForm::label1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(86, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Color";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(86, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Talla";
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(148, 192);
			this->txtColor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(100, 22);
			this->txtColor->TabIndex = 21;
			// 
			// txtSize
			// 
			this->txtSize->Location = System::Drawing::Point(148, 264);
			this->txtSize->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSize->Name = L"txtSize";
			this->txtSize->Size = System::Drawing::Size(100, 22);
			this->txtSize->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Nombre";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(148, 228);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(107, 22);
			this->txtName->TabIndex = 36;
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(474, 270);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(181, 28);
			this->btnPhoto->TabIndex = 37;
			this->btnPhoto->Text = L"Agregar foto";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &ProductForm::btnPhoto_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(296, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Estado";
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(299, 189);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(100, 22);
			this->txtStatus->TabIndex = 39;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 620);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnPhoto);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtSize);
			this->Controls->Add(this->dgvWarehouse);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ProductForm";
			this->Text = L"Mantenimiento de productos";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWarehouse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void RefreshGrid() {
			List<Product^>^ productList = Controller::QueryAllProducts();
			dgvWarehouse->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvWarehouse->Rows->Add(gcnew array<String^>{
						"" + productList[i]->Code,			//codigo
						"" + productList[i]->Price,		//precio
						productList[i]->Size,			//talla
						"" + productList[i]->Stock,		//stock
						productList[i]->Description,	//descripción
						productList[i]->Color			//Color
				});

			}
		}

		void ClearControls() {
			txtCode->Clear();
			txtDescription->Clear();
			txtSize->Clear();
			txtColor->Clear();
			txtPrice->Clear();
			txtStock->Clear();
			pbPhoto->Image = nullptr;
		}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Product^ p = gcnew Product();
		int key = 0;
		List <Product^>^ activeproducts = Controller::QueryAllProducts();
		for (int i = 0; 0 < activeproducts->Count; i++) {
			if ((txtCode->Text != Convert::ToString(activeproducts[i]->Code))
				||(txtName->Text != activeproducts[i]->Name)) {
				key = 1;
			}
		}

		if (key == 1) {
			p->Code = Double::Parse(txtCode->Text);
			p->Name = txtName->Text;
			p->Price = Double::Parse(txtPrice->Text);
			p->Size = txtSize->Text;
			p->Stock = Double::Parse(txtStock->Text);
			p->Description = txtDescription->Text;
			p->Color = txtColor->Text;
			p->Status = Char::Parse(txtStatus->Text);
			if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				p->Photo = ms->ToArray();
			}
			Controller::AddProduct(p);
			RefreshGrid();
			ClearControls();
		}
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Product^ p = gcnew Product();
		int key = 0;
		List <Product^>^ activeproducts = Controller::QueryAllProducts();
		for (int i = 0; 0 < activeproducts->Count; i++) {
			if ((txtCode->Text != Convert::ToString(activeproducts[i]->Code))
				|| (txtName->Text != activeproducts[i]->Name)) {
				key = 1;
			}
		}
		if (key == 1) {
			p->Code = Double::Parse(txtCode->Text);
			p->Name = txtName->Text;
			p->Price = Double::Parse(txtPrice->Text);
			p->Size = txtSize->Text;
			p->Stock = Double::Parse(txtStock->Text);
			p->Description = txtDescription->Text;
			p->Color = txtColor->Text;
			p->Status = Char::Parse(txtStatus->Text);
			if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				p->Photo = ms->ToArray();
			}
			Controller::UpdateProduct(p);
			RefreshGrid();
		}
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		double CodeProduct = Convert::ToDouble(txtCode->Text);
		Controller::DeleteProduct(CodeProduct);
		RefreshGrid();
		ClearControls();

	}
	private: System::Void dgvWarehouse_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int SelectedRowIndex = dgvWarehouse->SelectedCells[0]->RowIndex;
		double ProductCode = Convert::ToDouble(dgvWarehouse->Rows[SelectedRowIndex]->Cells[0]->Value->ToString());
		Product^ p = Controller::QueryProductByID(ProductCode);

		txtCode->Text = "" + p->Code;
		txtName->Text = p->Name;
		txtPrice->Text = "" + p->Price;
		txtSize->Text = p->Size;
		txtStock->Text = "" + p->Stock;
		txtDescription->Text = p->Description;
		txtColor->Text = p->Color;
		txtStatus->Text = "" + p->Status;
		if (p->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
			pbPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
		}
	}


	private: System::Void txtCode_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dgvWarehouse_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvWarehouse->CurrentCell != nullptr &&
			dgvWarehouse->CurrentCell->Value != nullptr &&
			dgvWarehouse->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvWarehouse->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvWarehouse->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			double ProductCode = Convert::ToDouble(a);
			Product^ s = Controller::QueryProductByID(ProductCode);
			txtCode->Text = "" + s->Code;
			txtPrice->Text = "" + s->Price;
			txtSize->Text = s->Size;
			txtStock->Text = "" + s->Stock;
			txtDescription->Text = s->Description;
			txtColor->Text = s->Color;
			txtStatus->Text = "" + s->Status;
		}
	}
	private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Session^ logged = gcnew Session();
		logged = Controller::rememberdata();
		RefreshGrid();
		//estado inicial del formulario requiere que se seleccione una o
		btnAdd->Enabled = false;
		btnDelete->Enabled = false;
		btnUpdate->Enabled = false;
		btnPhoto->Enabled = false;
	}
	private: System::Void txtPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void nuevoProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Session^ logged = gcnew Session();
		logged = Controller::rememberdata();
		if (logged->authority != 3) {
			btnAdd->Enabled = true;
			btnDelete->Enabled = false;
			btnUpdate->Enabled = false;
			btnPhoto->Enabled = true;
		}
	}
private: System::Void modificarProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Session^ logged = gcnew Session();
	logged = Controller::rememberdata();
	if (logged->authority != 3) {
		btnAdd->Enabled = false;
		btnDelete->Enabled = true;
		btnUpdate->Enabled = true;
		btnPhoto->Enabled = true;
	}
}
private: System::Void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
