#pragma once
#include "SearchProduct.h"

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesApp;
	/// <summary>
	/// Resumen de SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	public:
		SaleForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::Label^ lblcustomername;
	private: System::Windows::Forms::Label^ lblcustomerDNI;
	public:


	public:
	private:
		Customer^ customer;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCompanyUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;

		   double Salenumber;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtdate;
	private: System::Windows::Forms::TextBox^ txtClient;


	private: System::Windows::Forms::Button^ btnSearchClient;

	private: System::Windows::Forms::Button^ btnAddtosale;
	private: System::Windows::Forms::Button^ btnRemovefromsale;


	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtSubTotal;
	private: System::Windows::Forms::TextBox^ txtIGV;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Button^ btnRecordSale;





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtdate = (gcnew System::Windows::Forms::TextBox());
			this->txtClient = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchClient = (gcnew System::Windows::Forms::Button());
			this->btnAddtosale = (gcnew System::Windows::Forms::Button());
			this->btnRemovefromsale = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtIGV = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->btnRecordSale = (gcnew System::Windows::Forms::Button());
			this->lblcustomername = (gcnew System::Windows::Forms::Label());
			this->lblcustomerDNI = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyUser = (gcnew System::Windows::Forms::TextBox());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cliente";
			// 
			// txtdate
			// 
			this->txtdate->Location = System::Drawing::Point(127, 39);
			this->txtdate->Margin = System::Windows::Forms::Padding(4);
			this->txtdate->Name = L"txtdate";
			this->txtdate->ReadOnly = true;
			this->txtdate->Size = System::Drawing::Size(193, 22);
			this->txtdate->TabIndex = 2;
			// 
			// txtClient
			// 
			this->txtClient->Location = System::Drawing::Point(127, 73);
			this->txtClient->Margin = System::Windows::Forms::Padding(4);
			this->txtClient->Name = L"txtClient";
			this->txtClient->Size = System::Drawing::Size(333, 22);
			this->txtClient->TabIndex = 3;
			// 
			// btnSearchClient
			// 
			this->btnSearchClient->Location = System::Drawing::Point(487, 73);
			this->btnSearchClient->Margin = System::Windows::Forms::Padding(4);
			this->btnSearchClient->Name = L"btnSearchClient";
			this->btnSearchClient->Size = System::Drawing::Size(100, 28);
			this->btnSearchClient->TabIndex = 4;
			this->btnSearchClient->Text = L"Buscar";
			this->btnSearchClient->UseVisualStyleBackColor = true;
			this->btnSearchClient->Click += gcnew System::EventHandler(this, &SaleForm::btnSearchClient_Click);
			// 
			// btnAddtosale
			// 
			this->btnAddtosale->Location = System::Drawing::Point(127, 128);
			this->btnAddtosale->Margin = System::Windows::Forms::Padding(4);
			this->btnAddtosale->Name = L"btnAddtosale";
			this->btnAddtosale->Size = System::Drawing::Size(177, 27);
			this->btnAddtosale->TabIndex = 5;
			this->btnAddtosale->Text = L"Agregar producto";
			this->btnAddtosale->UseVisualStyleBackColor = true;
			this->btnAddtosale->Click += gcnew System::EventHandler(this, &SaleForm::btnAddtosale_Click);
			// 
			// btnRemovefromsale
			// 
			this->btnRemovefromsale->Location = System::Drawing::Point(359, 128);
			this->btnRemovefromsale->Margin = System::Windows::Forms::Padding(4);
			this->btnRemovefromsale->Name = L"btnRemovefromsale";
			this->btnRemovefromsale->Size = System::Drawing::Size(177, 27);
			this->btnRemovefromsale->TabIndex = 6;
			this->btnRemovefromsale->Text = L"Eliminar producto";
			this->btnRemovefromsale->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Código,
					this->Nombre, this->Precio, this->Cantidad, this->Subtotal
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 212);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(724, 176);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dataGridView1_CellValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(488, 410);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"SubTotal";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(488, 447);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"I.G.V.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(488, 486);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Total";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Location = System::Drawing::Point(589, 406);
			this->txtSubTotal->Margin = System::Windows::Forms::Padding(4);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(132, 22);
			this->txtSubTotal->TabIndex = 11;
			// 
			// txtIGV
			// 
			this->txtIGV->Location = System::Drawing::Point(589, 443);
			this->txtIGV->Margin = System::Windows::Forms::Padding(4);
			this->txtIGV->Name = L"txtIGV";
			this->txtIGV->ReadOnly = true;
			this->txtIGV->Size = System::Drawing::Size(132, 22);
			this->txtIGV->TabIndex = 12;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(589, 478);
			this->txtTotal->Margin = System::Windows::Forms::Padding(4);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(132, 22);
			this->txtTotal->TabIndex = 13;
			// 
			// btnRecordSale
			// 
			this->btnRecordSale->Location = System::Drawing::Point(85, 470);
			this->btnRecordSale->Margin = System::Windows::Forms::Padding(4);
			this->btnRecordSale->Name = L"btnRecordSale";
			this->btnRecordSale->Size = System::Drawing::Size(164, 28);
			this->btnRecordSale->TabIndex = 14;
			this->btnRecordSale->Text = L"Registrar venta";
			this->btnRecordSale->UseVisualStyleBackColor = true;
			this->btnRecordSale->Click += gcnew System::EventHandler(this, &SaleForm::btnRecordSale_Click);
			// 
			// lblcustomername
			// 
			this->lblcustomername->AutoSize = true;
			this->lblcustomername->Location = System::Drawing::Point(181, 186);
			this->lblcustomername->Name = L"lblcustomername";
			this->lblcustomername->Size = System::Drawing::Size(44, 16);
			this->lblcustomername->TabIndex = 15;
			this->lblcustomername->Text = L"label6";
			// 
			// lblcustomerDNI
			// 
			this->lblcustomerDNI->AutoSize = true;
			this->lblcustomerDNI->Location = System::Drawing::Point(260, 186);
			this->lblcustomerDNI->Name = L"lblcustomerDNI";
			this->lblcustomerDNI->Size = System::Drawing::Size(44, 16);
			this->lblcustomerDNI->TabIndex = 16;
			this->lblcustomerDNI->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 410);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"usuario de vendedor";
			this->label6->Click += gcnew System::EventHandler(this, &SaleForm::label6_Click);
			// 
			// txtCompanyUser
			// 
			this->txtCompanyUser->Location = System::Drawing::Point(55, 429);
			this->txtCompanyUser->Name = L"txtCompanyUser";
			this->txtCompanyUser->Size = System::Drawing::Size(117, 22);
			this->txtCompanyUser->TabIndex = 18;
			this->txtCompanyUser->TextChanged += gcnew System::EventHandler(this, &SaleForm::txtCompanyUser_TextChanged);
			// 
			// Código
			// 
			this->Código->HeaderText = L"Id";
			this->Código->MinimumWidth = 6;
			this->Código->Name = L"Código";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 270;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			this->Precio->Width = 60;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 6;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 70;
			// 
			// Subtotal
			// 
			this->Subtotal->HeaderText = L"Subtotal";
			this->Subtotal->MinimumWidth = 6;
			this->Subtotal->Name = L"Subtotal";
			this->Subtotal->Width = 70;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 532);
			this->Controls->Add(this->txtCompanyUser);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblcustomerDNI);
			this->Controls->Add(this->lblcustomername);
			this->Controls->Add(this->btnRecordSale);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtIGV);
			this->Controls->Add(this->txtSubTotal);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnRemovefromsale);
			this->Controls->Add(this->btnAddtosale);
			this->Controls->Add(this->btnSearchClient);
			this->Controls->Add(this->txtClient);
			this->Controls->Add(this->txtdate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SaleForm";
			this->Text = L"Venta realizada por";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	 private: Void RefreshTotalAmount() {
		 double total = 0;
		 double IGV = 0.18;
		 for (int i = 0; i < dataGridView1->RowCount - 1; i++)
			 total += Double::Parse(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		 txtSubTotal->Text = "" + (total * (1 - IGV));
		 txtIGV->Text = "" + (total * IGV);
		 txtTotal->Text = "" + total;
	 }
private: System::Void btnAddtosale_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchProduct^ searchproduct = gcnew SearchProduct(this);
	searchproduct->ShowDialog();
}
	   public: Void AddProducttoSalesDetail(Product^ p) {
		   dataGridView1->Rows->Add(gcnew array<String^> {
					p->Code,
				   p->Name,
				   Convert::ToString(p->Price),
				   "1",
				   Convert::ToString(p->Price)
		   });
		   //RefreshTotalAmount();
	   }

private: System::Void btnSearchClient_Click(System::Object^ sender, System::EventArgs^ e) {
	customer = Controller::QueryCustomerbyName(txtClient->Text);
	if (customer != nullptr) {
		//
		lblcustomername->Text = customer->Name + " - " + customer->LastName;
		lblcustomerDNI->Text = customer->DNI;
			
	}
	else {
		MessageBox::Show("Cliente no encontrado!");
	}
}
	   Void SetCustomer(Customer^ cust) {
		   this->customer = cust;
		   txtClient->Text = cust->DNI;
		   lblcustomername->Text = this->customer->Name + " - " + customer->LastName;
		   lblcustomerDNI->Text = this->customer->DNI;
	   }

private: System::Void SaleForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txtdate->Text = DateTime::Now.ToString("dd/MM/yyyy");

}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (dataGridView1->Columns[e->ColumnIndex]->Name == "quantity") {
		dataGridView1->Rows[e->RowIndex]->Cells[4]->Value =
			Int32::Parse(dataGridView1->CurrentCell->Value->ToString()) *
			Double::Parse(dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		RefreshTotalAmount();
	}
}
private: System::Void btnRecordSale_Click(System::Object^ sender, System::EventArgs^ e) {
	Salenumber++;
	Sale^ s = gcnew Sale();
	s->ID = Salenumber;
	s->Customer = (Customer^)txtClient->Text;
	s->Date = txtdate->Text;
	s->TotalPrice = Convert::ToDouble(txtTotal->Text);
	s->Salesman = (Salesman^)txtCompanyUser->Text;
	Controller::RegisterSale(s);
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtCompanyUser_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
