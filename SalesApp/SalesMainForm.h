#pragma once
#include "ProductForm.h"
#include "LoginForm.h"
#include "SaleForm.h"
#include "UsersForm.h"
#include "CustomerForm.h"
namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
	public:
		SalesMainForm(void)
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
		~SalesMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transacToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ UsuariostoolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;


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
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transacToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->UsuariostoolStripMenuItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->transacToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->reporteToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(688, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			// 
			// transacToolStripMenuItem
			// 
			this->transacToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentaToolStripMenuItem });
			this->transacToolStripMenuItem->Name = L"transacToolStripMenuItem";
			this->transacToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->transacToolStripMenuItem->Text = L"Transacción";
			this->transacToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::transacToolStripMenuItem_Click);
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar Venta";
			this->realizarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::realizarVentaToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->productoToolStripMenuItem,
					this->UsuariostoolStripMenuItem, this->clientesToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::mantenimientoToolStripMenuItem_Click);
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productoToolStripMenuItem_Click);
			// 
			// UsuariostoolStripMenuItem
			// 
			this->UsuariostoolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->UsuariostoolStripMenuItem->Name = L"UsuariostoolStripMenuItem";
			this->UsuariostoolStripMenuItem->Size = System::Drawing::Size(100, 27);
			this->UsuariostoolStripMenuItem->Text = L"Usuarios";
			this->UsuariostoolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::UsuariostoolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::clientesToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 427);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SalesMainForm";
			this->Text = L"Aplicacion de ventas";
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SalesMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog();
	}
	private: System::Void transacToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductForm^ productForm = gcnew ProductForm();
	productForm->MdiParent = this;
	productForm->Show();
}
private: System::Void realizarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleForm^ saleForm = gcnew SaleForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}

private: System::Void UsuariostoolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UsersForm^ usersform = gcnew UsersForm();
	usersform->MdiParent = this;
	usersform->Show();
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerForm^ customerForm = gcnew CustomerForm();
	customerForm->MdiParent = this;
	customerForm->Show();
}
};
}
