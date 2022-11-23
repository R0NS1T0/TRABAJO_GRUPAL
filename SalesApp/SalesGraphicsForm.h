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
	/// Resumen de SalesGraphicsForm
	/// </summary>
	public ref class SalesGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		SalesGraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~SalesGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ BarChart;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Piechartsales;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieChartModa;
	private: System::Windows::Forms::Button^ btnfiltrarvendedor;

	private: System::Windows::Forms::DateTimePicker^ dtpfechafinal;


	private: System::Windows::Forms::DateTimePicker^ dtpfechainicio;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbtiendas;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dtpinicio2;
	private: System::Windows::Forms::DateTimePicker^ dtpfin2;
	private: System::Windows::Forms::Button^ btnfiltrarTiendas;
	protected:
	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->BarChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Piechartsales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pieChartModa = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnfiltrarvendedor = (gcnew System::Windows::Forms::Button());
			this->dtpfechafinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpfechainicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbtiendas = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dtpinicio2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpfin2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnfiltrarTiendas = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Piechartsales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChartModa))->BeginInit();
			this->SuspendLayout();
			// 
			// BarChart
			// 
			chartArea7->Name = L"ChartArea1";
			this->BarChart->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->BarChart->Legends->Add(legend7);
			this->BarChart->Location = System::Drawing::Point(34, 116);
			this->BarChart->Name = L"BarChart";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"Monto";
			this->BarChart->Series->Add(series7);
			this->BarChart->Size = System::Drawing::Size(300, 300);
			this->BarChart->TabIndex = 0;
			this->BarChart->Text = L"chart_employeeSale";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(34, 451);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(244, 60);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Piechartsales
			// 
			chartArea8->Name = L"ChartArea1";
			this->Piechartsales->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->Piechartsales->Legends->Add(legend8);
			this->Piechartsales->Location = System::Drawing::Point(375, 116);
			this->Piechartsales->Name = L"Piechartsales";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			this->Piechartsales->Series->Add(series8);
			this->Piechartsales->Size = System::Drawing::Size(300, 300);
			this->Piechartsales->TabIndex = 3;
			this->Piechartsales->Text = L"chart_StoreSale";
			// 
			// pieChartModa
			// 
			chartArea9->Name = L"ChartArea1";
			this->pieChartModa->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->pieChartModa->Legends->Add(legend9);
			this->pieChartModa->Location = System::Drawing::Point(710, 116);
			this->pieChartModa->Name = L"pieChartModa";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series9->Legend = L"Legend1";
			series9->Name = L"Series1";
			this->pieChartModa->Series->Add(series9);
			this->pieChartModa->Size = System::Drawing::Size(300, 300);
			this->pieChartModa->TabIndex = 4;
			this->pieChartModa->Text = L"chart_ProductModa";
			// 
			// btnfiltrarvendedor
			// 
			this->btnfiltrarvendedor->Location = System::Drawing::Point(83, 84);
			this->btnfiltrarvendedor->Name = L"btnfiltrarvendedor";
			this->btnfiltrarvendedor->Size = System::Drawing::Size(75, 23);
			this->btnfiltrarvendedor->TabIndex = 5;
			this->btnfiltrarvendedor->Text = L"Filtrar";
			this->btnfiltrarvendedor->UseVisualStyleBackColor = true;
			this->btnfiltrarvendedor->Click += gcnew System::EventHandler(this, &SalesGraphicsForm::btnfiltrarvendedor_Click);
			// 
			// dtpfechafinal
			// 
			this->dtpfechafinal->Location = System::Drawing::Point(83, 56);
			this->dtpfechafinal->Name = L"dtpfechafinal";
			this->dtpfechafinal->Size = System::Drawing::Size(266, 22);
			this->dtpfechafinal->TabIndex = 6;
			this->dtpfechafinal->ValueChanged += gcnew System::EventHandler(this, &SalesGraphicsForm::dtpfechafinal_ValueChanged);
			// 
			// dtpfechainicio
			// 
			this->dtpfechainicio->Location = System::Drawing::Point(83, 28);
			this->dtpfechainicio->Name = L"dtpfechainicio";
			this->dtpfechainicio->Size = System::Drawing::Size(266, 22);
			this->dtpfechainicio->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"De";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Hasta";
			// 
			// cmbtiendas
			// 
			this->cmbtiendas->FormattingEnabled = true;
			this->cmbtiendas->Location = System::Drawing::Point(804, 86);
			this->cmbtiendas->Name = L"cmbtiendas";
			this->cmbtiendas->Size = System::Drawing::Size(121, 24);
			this->cmbtiendas->TabIndex = 10;
			this->cmbtiendas->SelectedIndexChanged += gcnew System::EventHandler(this, &SalesGraphicsForm::cmbtiendas_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(815, 419);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Moda de Tienda:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(462, 419);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ventas por Tienda";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 419);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Ventas por vendedor";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(386, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Hasta";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(386, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"De";
			// 
			// dtpinicio2
			// 
			this->dtpinicio2->Location = System::Drawing::Point(430, 23);
			this->dtpinicio2->Name = L"dtpinicio2";
			this->dtpinicio2->Size = System::Drawing::Size(266, 22);
			this->dtpinicio2->TabIndex = 18;
			// 
			// dtpfin2
			// 
			this->dtpfin2->Location = System::Drawing::Point(430, 51);
			this->dtpfin2->Name = L"dtpfin2";
			this->dtpfin2->Size = System::Drawing::Size(266, 22);
			this->dtpfin2->TabIndex = 17;
			this->dtpfin2->ValueChanged += gcnew System::EventHandler(this, &SalesGraphicsForm::dtpfin2_ValueChanged);
			// 
			// btnfiltrarTiendas
			// 
			this->btnfiltrarTiendas->Location = System::Drawing::Point(430, 79);
			this->btnfiltrarTiendas->Name = L"btnfiltrarTiendas";
			this->btnfiltrarTiendas->Size = System::Drawing::Size(75, 23);
			this->btnfiltrarTiendas->TabIndex = 16;
			this->btnfiltrarTiendas->Text = L"Filtrar";
			this->btnfiltrarTiendas->UseVisualStyleBackColor = true;
			this->btnfiltrarTiendas->Click += gcnew System::EventHandler(this, &SalesGraphicsForm::btnfiltrarTiendas_Click);
			// 
			// SalesGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 523);
			this->Controls->Add(this->dtpinicio2);
			this->Controls->Add(this->dtpfin2);
			this->Controls->Add(this->btnfiltrarTiendas);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbtiendas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dtpfechainicio);
			this->Controls->Add(this->dtpfechafinal);
			this->Controls->Add(this->btnfiltrarvendedor);
			this->Controls->Add(this->pieChartModa);
			this->Controls->Add(this->Piechartsales);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BarChart);
			this->Name = L"SalesGraphicsForm";
			this->Text = L"Estadisticas de tiendas";
			this->Load += gcnew System::EventHandler(this, &SalesGraphicsForm::SalesGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Piechartsales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChartModa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


public: Void FillCombStores() {
	cmbtiendas->Items->Clear();
	List <Store^>^ storeList = Controller::QueryAllStores();
	for (int i = 0; i < storeList->Count; i++) {
		cmbtiendas->Items->Add(storeList[i]->BranchID);
	}
}

private: System::Void SalesGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	FillCombStores();
	List<Sale^>^ saleList = gcnew List<Sale^>();
	List<StoreProducts^>^ changedstock = gcnew List<StoreProducts^>();
	saleList = Controller::QueryAllSales();
	
	for (int i = 0; i < saleList->Count; i++) {
		BarChart->Series["Monto"]->Points->Add(saleList[i]->Amount);
		BarChart->Series["Monto"]->Points[i]->AxisLabel = saleList[i]->Salesman;
		BarChart->Series["Monto"]->Points[i]->Label = Convert::ToString(saleList[i]->Amount);

		Piechartsales->Series["Series1"]->Points->Add(saleList[i]->TotalPrice);
		Piechartsales->Series["Series1"]->Points[i]->LegendText = saleList[i]->Store;
		Piechartsales->Series["Series1"]->Points[i]->Label = Convert::ToString(saleList[i]->TotalPrice);

		//procesos para hallar la moda de los productos exclusivo con filtro de tienda
		
	}
	
}
private: System::Void btnfiltrarvendedor_Click(System::Object^ sender, System::EventArgs^ e) {

	List<Sale^>^ modList1 = gcnew List<Sale^>();
	
	List<Sale^>^ saleList = Controller::QueryAllSales();
	for (int j = 0; j < modList1->Count; j++) {
		for (int i = 0; i < saleList->Count; i++) {
			if((Convert::ToDateTime(dtpfechainicio->Text)<=Convert::ToDateTime(saleList[i]->Date))&&
				(Convert::ToDateTime(saleList[i]->Date)<=Convert::ToDateTime(dtpfechafinal->Text))) {
					modList1[j] = saleList[i];
			}
		}
	}
	for (int i = 0; i < modList1->Count; i++) {
		BarChart->Series["Monto"]->Points->Add(modList1[i]->Amount);						//valor de eje y
		BarChart->Series["Monto"]->Points[i]->AxisLabel = modList1[i]->Salesman;				//valor de eje x
		BarChart->Series["Monto"]->Points[i]->Label = Convert::ToString(modList1[i]->Amount);
	}

}
private: System::Void btnfiltrarTiendas_Click(System::Object^ sender, System::EventArgs^ e) {
	
	List<Sale^>^ modList2 = gcnew List<Sale^>();
	List<Sale^>^ saleList = Controller::QueryAllSales();
	for (int j = 0; j < modList2->Count; j++) {
		for (int i = 0; i < saleList->Count; i++) {
			if ((Convert::ToDateTime(dtpinicio2->Text) <= Convert::ToDateTime(saleList[i]->Date)) &&
				(Convert::ToDateTime(saleList[i]->Date) <= Convert::ToDateTime(dtpfin2->Text))) {

				modList2[j] = saleList[i];
			}

		}
	}
	for (int i = 0; i < modList2->Count; i++) {
		Piechartsales->Series["Series1"]->Points->Add(saleList[i]->TotalPrice);
		Piechartsales->Series["Series1"]->Points[i]->LegendText = saleList[i]->Store;
		Piechartsales->Series["Series1"]->Points[i]->Label = Convert::ToString(saleList[i]->TotalPrice);
	}
}
private: System::Void dtpfechafinal_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void dtpfin2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void cmbtiendas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	List<Sale^>^ saleList = Controller::QueryAllSales();
	List<StoreProducts^>^ changedstock = gcnew List<StoreProducts^>();
	
	for (int i = 0; i < saleList->Count; i++) {			//parece ser que la lista de venta no es realmente util aca
		for (int j = 0; j < changedstock->Count; j++) {
			if (changedstock[i]->Store == (Convert::ToString(cmbtiendas->Text))) {
				pieChartModa->Series["series1"]->Points->Add(((changedstock[i]->originalStock) - (changedstock[i]->Status)));
				pieChartModa->Series["series1"]->Points[i]->AxisLabel = Convert::ToString(changedstock[i]->Name);
				pieChartModa->Series["series1"]->Points[i]->Label = Convert::ToString(((changedstock[i]->originalStock) - (changedstock[i]->Status)));
			}
		}
	}
}
};

}
