#pragma once

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
	/// Resumen de SalesGraphicsForm
	/// </summary>
	public ref class SalesGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		SalesGraphicsForm(void)
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->BarChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Piechartsales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Piechartsales))->BeginInit();
			this->SuspendLayout();
			// 
			// BarChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->BarChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->BarChart->Legends->Add(legend1);
			this->BarChart->Location = System::Drawing::Point(30, 38);
			this->BarChart->Name = L"BarChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto";
			this->BarChart->Series->Add(series1);
			this->BarChart->Size = System::Drawing::Size(300, 300);
			this->BarChart->TabIndex = 0;
			this->BarChart->Text = L"chart_employeeSale";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(30, 358);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(244, 60);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Piechartsales
			// 
			chartArea2->Name = L"ChartArea1";
			this->Piechartsales->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->Piechartsales->Legends->Add(legend2);
			this->Piechartsales->Location = System::Drawing::Point(380, 38);
			this->Piechartsales->Name = L"Piechartsales";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->Piechartsales->Series->Add(series2);
			this->Piechartsales->Size = System::Drawing::Size(300, 300);
			this->Piechartsales->TabIndex = 3;
			this->Piechartsales->Text = L"chart_StoreSale";
			// 
			// SalesGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 454);
			this->Controls->Add(this->Piechartsales);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BarChart);
			this->Name = L"SalesGraphicsForm";
			this->Text = L"SalesGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &SalesGraphicsForm::SalesGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Piechartsales))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
private: System::Void SalesGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	/*private: System::Void SalesGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			List<Sale^>^ saleList = Controller::QueryAllSales();
			for (int i = 0; i < saleList->Count; i++) {
				BarChart->Series["Monto"]->Points->Add(saleList[i]->TotalPrice);
				BarChart->Series["Monto"]->Points[i]->AxisLabel = saleList[i]->Customer;
				BarChart->Series["Monto"]->Points[i]->Label = Convert::ToString(saleList[i]->TotalPrice);

				Piechartsales->Series["Series2"]->Points->Add(saleList[i]->Amount);
				Piechartsales->Series["Series2"]->Points[i]->LegendText = saleList[i]->Store;
				Piechartsales->Series["Series2"]->Points[i]->Label = Convert::ToString(saleList[i]->TotalPrice);

			}
		}*/
}
};

}
