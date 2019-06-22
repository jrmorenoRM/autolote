#pragma once
using namespace MySql::Data::MySqlClient;
#include "VehiculosEditar.h"
#include <string>


namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Vehiculos
	/// </summary>
	public ref class Vehiculos : public System::Windows::Forms::Form
	{
	public:
		Vehiculos(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Vehiculos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Button^ btneliminar;
	private: System::Windows::Forms::Button^ btncerrar;
	private: System::Windows::Forms::Button^ btncargar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;

	private: System::Windows::Forms::Panel^ panel2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->btncargar = (gcnew System::Windows::Forms::Button());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 279);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(356, 155);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Vehiculos::DataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(77, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Listado De Vehiculos";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->modificarToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(360, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Vehiculos::ModificarToolStripMenuItem_Click);
			// 
			// btneliminar
			// 
			this->btneliminar->FlatAppearance->BorderSize = 0;
			this->btneliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btneliminar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btneliminar->Location = System::Drawing::Point(135, 8);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(85, 33);
			this->btneliminar->TabIndex = 4;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &Vehiculos::Btneliminar_Click);
			// 
			// btncerrar
			// 
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncerrar->ForeColor = System::Drawing::Color::White;
			this->btncerrar->Location = System::Drawing::Point(256, 8);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(89, 33);
			this->btncerrar->TabIndex = 3;
			this->btncerrar->Text = L"Cerrar";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &Vehiculos::Btncerrar_Click);
			// 
			// btncargar
			// 
			this->btncargar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncargar->FlatAppearance->BorderSize = 0;
			this->btncargar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncargar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncargar->ForeColor = System::Drawing::Color::White;
			this->btncargar->Location = System::Drawing::Point(30, 8);
			this->btncargar->Name = L"btncargar";
			this->btncargar->Size = System::Drawing::Size(83, 33);
			this->btncargar->TabIndex = 2;
			this->btncargar->Text = L"Cargar";
			this->btncargar->UseVisualStyleBackColor = true;
			this->btncargar->Click += gcnew System::EventHandler(this, &Vehiculos::Btncargar_Click);
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(0, 285);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(70, 20);
			this->txtid->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btneliminar);
			this->panel2->Controls->Add(this->btncargar);
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 219);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(357, 50);
			this->panel2->TabIndex = 7;
			// 
			// Vehiculos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 269);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Vehiculos";
			this->Text = L"Vehiculos";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	

	}
private: System::Void Btncargar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
	MySqlConnection^ conn = gcnew MySqlConnection(connection);
	conn->Open();
	MySqlCommand^ conncmd = gcnew MySqlCommand("Select marca, modelo, idmodelos from marca inner join modelos on marca.idmarca = modelos.idmarca; ", conn);

	
	
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = conncmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);
}
	catch (...)
	{
	}
}
private: System::Void Btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Btneliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
	MySqlConnection^ conn = gcnew MySqlConnection(connection);
	MySqlCommand^ conncmd = gcnew MySqlCommand("Delete from modelos Where idmodelos='" + this->txtid->Text + "' ;", conn);
	MySqlDataReader^ datareader;

	try
	{
		conn->Open();
		datareader = conncmd->ExecuteReader();
		MessageBox::Show("Cambio ejecutado con exito");
		while (datareader->Read())
		{}
		txtid->Clear();

	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void ModificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	VehiculosEditar^ ve = gcnew VehiculosEditar();
	ve->ShowDialog();
}
private: System::Void Btncerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
	
}
