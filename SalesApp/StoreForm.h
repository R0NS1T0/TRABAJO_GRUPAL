#pragma once

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtPostalCode;
	private: System::Windows::Forms::TextBox^ txtArea;






	private: System::Windows::Forms::ComboBox^ cmbDistrict;
	private: System::Windows::Forms::ComboBox^ cmbSalesman;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbtnNo;
	private: System::Windows::Forms::RadioButton^ rbtnYes;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvStore;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ storeId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ storeName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ salesmanResponsible;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->txtArea = (gcnew System::Windows::Forms::TextBox());
			this->cmbDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->cmbSalesman = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnYes = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNo = (gcnew System::Windows::Forms::RadioButton());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvStore = (gcnew System::Windows::Forms::DataGridView());
			this->storeId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->storeName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->salesmanResponsible = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
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
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->eliminarToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Descripción:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Dirección:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Distrito:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 275);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Cód.Postal:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(382, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Vendedor responsable:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(272, 275);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Área (m2):";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(113, 45);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(227, 22);
			this->txtId->TabIndex = 9;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(113, 79);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(605, 22);
			this->txtName->TabIndex = 10;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(113, 126);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(605, 51);
			this->txtDescription->TabIndex = 11;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(113, 189);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(605, 22);
			this->txtAddress->TabIndex = 12;
			// 
			// txtPostalCode
			// 
			this->txtPostalCode->Location = System::Drawing::Point(113, 269);
			this->txtPostalCode->Name = L"txtPostalCode";
			this->txtPostalCode->Size = System::Drawing::Size(136, 22);
			this->txtPostalCode->TabIndex = 14;
			// 
			// txtArea
			// 
			this->txtArea->Location = System::Drawing::Point(346, 272);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(100, 22);
			this->txtArea->TabIndex = 15;
			// 
			// cmbDistrict
			// 
			this->cmbDistrict->FormattingEnabled = true;
			this->cmbDistrict->Location = System::Drawing::Point(113, 228);
			this->cmbDistrict->Name = L"cmbDistrict";
			this->cmbDistrict->Size = System::Drawing::Size(332, 24);
			this->cmbDistrict->TabIndex = 16;
			// 
			// cmbSalesman
			// 
			this->cmbSalesman->FormattingEnabled = true;
			this->cmbSalesman->Location = System::Drawing::Point(547, 45);
			this->cmbSalesman->Name = L"cmbSalesman";
			this->cmbSalesman->Size = System::Drawing::Size(171, 24);
			this->cmbSalesman->TabIndex = 17;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnNo);
			this->groupBox1->Controls->Add(this->rbtnYes);
			this->groupBox1->Location = System::Drawing::Point(491, 228);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(227, 63);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Posee sistema de refrigeración";
			// 
			// rbtnYes
			// 
			this->rbtnYes->AutoSize = true;
			this->rbtnYes->Location = System::Drawing::Point(19, 37);
			this->rbtnYes->Name = L"rbtnYes";
			this->rbtnYes->Size = System::Drawing::Size(40, 20);
			this->rbtnYes->TabIndex = 0;
			this->rbtnYes->TabStop = true;
			this->rbtnYes->Text = L"Sí";
			this->rbtnYes->UseVisualStyleBackColor = true;
			// 
			// rbtnNo
			// 
			this->rbtnNo->AutoSize = true;
			this->rbtnNo->Location = System::Drawing::Point(137, 37);
			this->rbtnNo->Name = L"rbtnNo";
			this->rbtnNo->Size = System::Drawing::Size(46, 20);
			this->rbtnNo->TabIndex = 1;
			this->rbtnNo->TabStop = true;
			this->rbtnNo->Text = L"No";
			this->rbtnNo->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(146, 313);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(155, 25);
			this->btnAdd->TabIndex = 19;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(324, 315);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(163, 23);
			this->btnUpdate->TabIndex = 20;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(510, 315);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(154, 23);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// dgvStore
			// 
			this->dgvStore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->storeId, this->storeName,
					this->salesmanResponsible
			});
			this->dgvStore->Location = System::Drawing::Point(59, 346);
			this->dgvStore->Name = L"dgvStore";
			this->dgvStore->RowHeadersWidth = 51;
			this->dgvStore->RowTemplate->Height = 24;
			this->dgvStore->Size = System::Drawing::Size(605, 150);
			this->dgvStore->TabIndex = 22;
			// 
			// storeId
			// 
			this->storeId->HeaderText = L"Id";
			this->storeId->MinimumWidth = 6;
			this->storeId->Name = L"storeId";
			this->storeId->Width = 30;
			// 
			// storeName
			// 
			this->storeName->HeaderText = L"Nombre";
			this->storeName->MinimumWidth = 6;
			this->storeName->Name = L"storeName";
			this->storeName->Width = 250;
			// 
			// salesmanResponsible
			// 
			this->salesmanResponsible->HeaderText = L"Vendedor responsable";
			this->salesmanResponsible->MinimumWidth = 6;
			this->salesmanResponsible->Name = L"salesmanResponsible";
			this->salesmanResponsible->Width = 170;
			// 
			// StoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 530);
			this->Controls->Add(this->dgvStore);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cmbSalesman);
			this->Controls->Add(this->cmbDistrict);
			this->Controls->Add(this->txtArea);
			this->Controls->Add(this->txtPostalCode);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StoreForm";
			this->Text = L"Mantenimiento de tiendas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
