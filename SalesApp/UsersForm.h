#pragma once

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
	public ref class UsersForm : public System::Windows::Forms::Form
	{
	public:
		UsersForm(void)
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
		~UsersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvUserList;
	protected:

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnupdate;
	private: System::Windows::Forms::Button^ btnDelete;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ accionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ añadirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtLastname;
	private: System::Windows::Forms::TextBox^ txtemail;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtCompanyuser;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::ComboBox^ cmbGender;
	private: System::Windows::Forms::ComboBox^ cmbAuthority;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;











	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgtUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgtName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgtLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgtDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgtPhone;
	protected:

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
			this->dgvUserList = (gcnew System::Windows::Forms::DataGridView());
			this->dgtUser = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgtName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgtLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgtDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgtPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->añadirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastname = (gcnew System::Windows::Forms::TextBox());
			this->txtemail = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyuser = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
			this->cmbAuthority = (gcnew System::Windows::Forms::ComboBox());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserList))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvUserList
			// 
			this->dgvUserList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgtUser,
					this->dgtName, this->dgtLastName, this->dgtDNI, this->dgtPhone
			});
			this->dgvUserList->Location = System::Drawing::Point(19, 328);
			this->dgvUserList->Name = L"dgvUserList";
			this->dgvUserList->RowHeadersWidth = 51;
			this->dgvUserList->RowTemplate->Height = 24;
			this->dgvUserList->Size = System::Drawing::Size(610, 157);
			this->dgvUserList->TabIndex = 0;
			this->dgvUserList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsersForm::dgvUserList_CellClick);
			this->dgvUserList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsersForm::dgvUserList_CellContentClick);
			// 
			// dgtUser
			// 
			this->dgtUser->HeaderText = L"Usuario";
			this->dgtUser->MinimumWidth = 6;
			this->dgtUser->Name = L"dgtUser";
			this->dgtUser->Width = 125;
			// 
			// dgtName
			// 
			this->dgtName->HeaderText = L"Nombre";
			this->dgtName->MinimumWidth = 6;
			this->dgtName->Name = L"dgtName";
			this->dgtName->Width = 125;
			// 
			// dgtLastName
			// 
			this->dgtLastName->HeaderText = L"Apellido";
			this->dgtLastName->MinimumWidth = 6;
			this->dgtLastName->Name = L"dgtLastName";
			this->dgtLastName->Width = 125;
			// 
			// dgtDNI
			// 
			this->dgtDNI->HeaderText = L"DNI";
			this->dgtDNI->MinimumWidth = 6;
			this->dgtDNI->Name = L"dgtDNI";
			this->dgtDNI->Width = 125;
			// 
			// dgtPhone
			// 
			this->dgtPhone->HeaderText = L"Telefono";
			this->dgtPhone->MinimumWidth = 6;
			this->dgtPhone->Name = L"dgtPhone";
			this->dgtPhone->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(12, 255);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(85, 30);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &UsersForm::btnAdd_Click);
			// 
			// btnupdate
			// 
			this->btnupdate->Location = System::Drawing::Point(108, 255);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(94, 29);
			this->btnupdate->TabIndex = 2;
			this->btnupdate->Text = L"Modificar";
			this->btnupdate->UseVisualStyleBackColor = true;
			this->btnupdate->Click += gcnew System::EventHandler(this, &UsersForm::btnupdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(208, 256);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(94, 29);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &UsersForm::btnDelete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"nombre";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(659, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accionesToolStripMenuItem
			// 
			this->accionesToolStripMenuItem->Checked = true;
			this->accionesToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->accionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->añadirToolStripMenuItem,
					this->modificarToolStripMenuItem
			});
			this->accionesToolStripMenuItem->Name = L"accionesToolStripMenuItem";
			this->accionesToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->accionesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->accionesToolStripMenuItem->Text = L"Acciones";
			// 
			// añadirToolStripMenuItem
			// 
			this->añadirToolStripMenuItem->Name = L"añadirToolStripMenuItem";
			this->añadirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->añadirToolStripMenuItem->Text = L"añadir";
			this->añadirToolStripMenuItem->Click += gcnew System::EventHandler(this, &UsersForm::añadirToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->modificarToolStripMenuItem->Text = L"modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &UsersForm::modificarToolStripMenuItem_Click);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(102, 49);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 22);
			this->txtName->TabIndex = 6;
			// 
			// txtLastname
			// 
			this->txtLastname->Location = System::Drawing::Point(102, 87);
			this->txtLastname->Name = L"txtLastname";
			this->txtLastname->Size = System::Drawing::Size(100, 22);
			this->txtLastname->TabIndex = 7;
			// 
			// txtemail
			// 
			this->txtemail->Location = System::Drawing::Point(102, 126);
			this->txtemail->Name = L"txtemail";
			this->txtemail->Size = System::Drawing::Size(207, 22);
			this->txtemail->TabIndex = 8;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(102, 170);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 22);
			this->txtDNI->TabIndex = 9;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(102, 214);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(207, 22);
			this->txtAddress->TabIndex = 10;
			// 
			// txtCompanyuser
			// 
			this->txtCompanyuser->Location = System::Drawing::Point(422, 49);
			this->txtCompanyuser->Name = L"txtCompanyuser";
			this->txtCompanyuser->Size = System::Drawing::Size(207, 22);
			this->txtCompanyuser->TabIndex = 11;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(422, 87);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(207, 22);
			this->txtPassword->TabIndex = 12;
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(422, 126);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(118, 22);
			this->txtPhone->TabIndex = 13;
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->cmbGender->Location = System::Drawing::Point(422, 168);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(121, 24);
			this->cmbGender->TabIndex = 14;
			// 
			// cmbAuthority
			// 
			this->cmbAuthority->FormattingEnabled = true;
			this->cmbAuthority->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"administrador", L"gerente de tienda", L"vendedor"
			});
			this->cmbAuthority->Location = System::Drawing::Point(422, 212);
			this->cmbAuthority->Name = L"cmbAuthority";
			this->cmbAuthority->Size = System::Drawing::Size(121, 24);
			this->cmbAuthority->TabIndex = 15;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(353, 275);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(206, 22);
			this->dtpBirthday->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"correo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 16);
			this->label4->TabIndex = 19;
			this->label4->Text = L"DNI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Direccion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(357, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(340, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Contraseña";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(350, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L"telefono";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(349, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 16);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Genero";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(350, 214);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 16);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Autoridad";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(350, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Fecha de nacimiento";
			// 
			// UsersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 520);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->cmbAuthority);
			this->Controls->Add(this->cmbGender);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtCompanyuser);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtemail);
			this->Controls->Add(this->txtLastname);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnupdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvUserList);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UsersForm";
			this->Text = L"Información de Usuarios";
			this->Load += gcnew System::EventHandler(this, &UsersForm::UsersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserList))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
		void ClearControls() {
			txtName->Clear();
			txtLastname->Clear();
			txtemail->Clear();
			txtAddress->Clear();
			txtCompanyuser->Clear();
			txtDNI->Clear();
			txtPassword->Clear();
			txtPhone->Clear();
		}
		void RefreshGrid() {
			List<Employee^>^ employeeList = Controller::QueryAllUsers();
			dgvUserList->Rows->Clear();
			for (int i = 0; i < employeeList->Count; i++) {
				dgvUserList->Rows->Add(gcnew array<String^>{
						employeeList[i]->CompanyUser,			//usuario
						employeeList[i]->Name,		//nombre
						employeeList[i]->LastName,			//apellido
						employeeList[i]->DocumentNumber,		//DNI
						employeeList[i]->PhoneNumber	//telefono
				});

			}
		}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Employee^ d = gcnew Employee();
	d->Name = txtName->Text;
	d->LastName = txtLastname->Text;
	d->Email = txtemail->Text;
	d->Address = txtAddress->Text;
	d->Birthday = dtpBirthday->Text;
	d->CompanyUser = txtCompanyuser->Text;
	d->Gender = cmbGender->Text;
	d->DocumentNumber = txtDNI->Text;
	//para d, cambiar cmbauthority de string a int16
	//L"administrador", L"gerente de tienda", L"vendedor"
	if (cmbAuthority->Text == "administrador") {
		d->AuthorityClass = 1;
	}
	if (cmbAuthority->Text == "gerente de tienda") {
		d->AuthorityClass = 2;
	}
	if (cmbAuthority->Text == "vendedor") {
		d->AuthorityClass = 3;
	}
	d->Password = txtPassword->Text;
	d->PhoneNumber = txtPhone->Text;
	Controller::AddCompanyUser(d);
	ClearControls();
	RefreshGrid();
}
private: System::Void btnupdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Employee^ d = gcnew Employee();
	d->Name = txtName->Text;
	d->LastName = txtLastname->Text;
	d->Email = txtemail->Text;
	d->Address = txtAddress->Text;
	d->Birthday = dtpBirthday->Text;
	d->CompanyUser = txtCompanyuser->Text;
	d->Gender = cmbGender->Text;
	d->DocumentNumber = txtDNI->Text;
	if (cmbAuthority->Text == "administrador") {
		d->AuthorityClass = 1;
	}
	if (cmbAuthority->Text == "gerente de tienda") {
		d->AuthorityClass = 2;
	}
	if (cmbAuthority->Text == "vendedor") {
		d->AuthorityClass = 3;
	}
	d->Password = txtPassword->Text;
	d->PhoneNumber = txtPhone->Text;
	Controller::UpdateCompanyUser(d);
	ClearControls();
	RefreshGrid();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Code = txtCompanyuser->Text;
	Controller::DeleteCompanyUser(Code);
	RefreshGrid();
}
private: System::Void añadirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = true;
	btnDelete->Enabled = false;
	btnupdate->Enabled = false;
}
private: System::Void UsersForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
	btnAdd->Enabled = true;
	btnDelete->Enabled = true;
	btnupdate->Enabled = true;
}
private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnDelete->Enabled = true;
	btnupdate->Enabled = true;
}
private: System::Void dgvUserList_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvUserList->CurrentCell != nullptr &&
		dgvUserList->CurrentCell->Value != nullptr &&
		dgvUserList->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvUserList->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvUserList->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		String^ Code = a;
		Employee^ s = Controller::QueryUserById(Code);
		txtCompanyuser->Text = s->CompanyUser;
		txtName->Text = s->Name;
		txtLastname->Text = s->LastName;
		txtDNI->Text = s->DocumentNumber;
		txtPhone->Text = s->PhoneNumber;
		txtPassword->Text=s->Password;
	}
}
private: System::Void dgvUserList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int SelectedRowIndex = dgvUserList->SelectedCells[0]->RowIndex;
	String^ UserCode = dgvUserList->Rows[SelectedRowIndex]->Cells[0]->Value->ToString();
	Employee^ s = Controller::QueryUserById(UserCode);

	txtCompanyuser->Text = s->CompanyUser;
	txtName->Text = s->Name;
	txtLastname->Text = s->LastName;
	txtDNI->Text = s->DocumentNumber;
	txtPhone->Text = s->PhoneNumber;
}
};
}
