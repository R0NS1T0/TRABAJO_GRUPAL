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
	/// <summary>
	/// Resumen de SearchProduct
	/// </summary>
	public ref class SearchProduct : public System::Windows::Forms::Form
	{
	public:
		SearchProduct(void)
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
			this->btnSearch->Location = System::Drawing::Point(91, 89);
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
			// SearchProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 164);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label1);
			this->Name = L"SearchProduct";
			this->Text = L"Buscar Producto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productCode;
		productCode = txtCode->Text;
		Controller::QueryProductByID(productCode);
	}
	};
}
