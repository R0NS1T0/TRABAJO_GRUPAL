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
	/// Resumen de RegisterUserForm
	/// </summary>
	public ref class RegisterUserForm : public System::Windows::Forms::Form
	{
	public:
		RegisterUserForm(void)
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
		~RegisterUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::ComboBox^ cbAuthorityLvl;
	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::Button^ btnCreate;








	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtAdminAccesCode;






	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->cbAuthorityLvl = (gcnew System::Windows::Forms::ComboBox());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtAdminAccesCode = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Rango:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Género:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(57, 273);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"DNI:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(396, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Teléfono:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(145, 36);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(121, 22);
			this->txtName->TabIndex = 7;
			
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(145, 79);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(121, 22);
			this->txtSurname->TabIndex = 8;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(145, 129);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(196, 22);
			this->txtEmail->TabIndex = 9;
			
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(145, 273);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(107, 22);
			this->txtId->TabIndex = 12;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(555, 126);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(107, 22);
			this->txtPhoneNumber->TabIndex = 13;
			// 
			// cbAuthorityLvl
			// 
			this->cbAuthorityLvl->FormattingEnabled = true;
			this->cbAuthorityLvl->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"administrador", L"gerente de tienda", L"vendedor" });
			this->cbAuthorityLvl->Location = System::Drawing::Point(145, 177);
			this->cbAuthorityLvl->Name = L"cbAuthorityLvl";
			this->cbAuthorityLvl->Size = System::Drawing::Size(121, 24);
			this->cbAuthorityLvl->TabIndex = 14;
			// 
			// cbGender
			// 
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->cbGender->Location = System::Drawing::Point(145, 224);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(121, 24);
			this->cbGender->TabIndex = 15;
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(198, 356);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(143, 23);
			this->btnCreate->TabIndex = 16;
			this->btnCreate->Text = L"Crear";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &RegisterUserForm::btnCreate_click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(452, 356);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(134, 23);
			this->btnCancel->TabIndex = 17;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterUserForm::btnCancel_click);
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(555, 36);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(210, 22);
			this->dtpBirthday->TabIndex = 18;
			
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(396, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Fecha de Nacimiento";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(396, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Dirección";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(396, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Contraseña";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(396, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Usuario";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(396, 280);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(118, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Código de acceso";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(555, 78);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(210, 22);
			this->txtAddress->TabIndex = 24;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(555, 227);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(100, 22);
			this->txtPassword->TabIndex = 25;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(555, 179);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 22);
			this->txtUsername->TabIndex = 26;
			// 
			// txtAdminAccesCode
			// 
			this->txtAdminAccesCode->Location = System::Drawing::Point(555, 277);
			this->txtAdminAccesCode->Name = L"txtAdminAccesCode";
			this->txtAdminAccesCode->PasswordChar = '*';
			this->txtAdminAccesCode->Size = System::Drawing::Size(100, 22);
			this->txtAdminAccesCode->TabIndex = 27;
			this->txtAdminAccesCode->Text = L"q";
			// 
			// RegisterUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 405);
			this->Controls->Add(this->txtAdminAccesCode);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->cbAuthorityLvl);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterUserForm";
			this->Text = L"Crea una cuenta";
			this->Load += gcnew System::EventHandler(this, &RegisterUserForm::RegisterUserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnCancel_click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnCreate_click(System::Object^ sender, System::EventArgs^ e) {
		//Como punto de partida, estoy estableciendo este codigo de acceso de administrador:1234
		String^ admincode;
		List<Employee^>^ currentList = Controller::QueryAllUsers();
		Employee^ d = gcnew Employee();
		int key=0;
		//para todos los usuarios existentes, se busca si hay coincidencia de nombre de usuario, DNI y contraseña
		for (int i = 0; 0 < currentList->Count; i++) {
			if ((txtUsername->Text == currentList[i]->CompanyUser) ||
				(txtId->Text == currentList[i]->DocumentNumber) ||
				(txtPassword->Text == currentList[i]->Password)) {
				MessageBox::Show("Datos ya en uso");
				
				break;
			}
			else {
				key = 1;
			}
		}
		if (key == 1) {
			if ((admincode = txtAdminAccesCode->Text) == "1234") {

				d->Name = txtName->Text;
				d->LastName = txtSurname->Text;
				d->Email = txtEmail->Text;
				d->Address = txtAddress->Text;
				d->Birthday = dtpBirthday->Text;
				d->CompanyUser = txtUsername->Text;
				d->Gender = cbGender->Text;
				d->DocumentNumber = txtId->Text;
				if (cbAuthorityLvl->Text == "administrador") {
					d->AuthorityClass = 1;
				}
				if (cbAuthorityLvl->Text == "gerente de tienda") {
					d->AuthorityClass = 2;
				}
				if (cbAuthorityLvl->Text == "vendedor") {
					d->AuthorityClass = 3;
				}
				d->Password = txtPassword->Text;
				d->PhoneNumber = txtPhoneNumber->Text;
				Controller::AddCompanyUser(d);
			}
			else
			{
				MessageBox::Show("Ingrese el codigo de administrador correcto");
			}
		this->Close();
		}
		
	}
	
	private: System::Void RegisterUserForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}