#pragma once
using namespace MySql::Data::MySqlClient;
#include "MatriculaDeAlumno.h"

namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClasesH
	/// </summary>
	public ref class ClasesH : public System::Windows::Forms::Form
	{
	public:
		ClasesH(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
			MySqlConnection^ conn = gcnew MySqlConnection(connection);
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select nombre, apellido from alumnos inner join matricula_alumnos on alumnos.id = matricula_alumnos.idalumno ; ", conn);
			MySqlDataReader^ datareader;

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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClasesH()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ matricularToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarToolStripMenuItem;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btncerrar;
	private: System::Windows::Forms::Label^ label1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClasesH::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->matricularToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Location = System::Drawing::Point(6, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(631, 231);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ClasesH::Panel1_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-6, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(631, 164);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClasesH::DataGridView1_CellContentClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->matricularToolStripMenuItem,
					this->eliminarToolStripMenuItem, this->cerrarToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(631, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// matricularToolStripMenuItem
			// 
			this->matricularToolStripMenuItem->Name = L"matricularToolStripMenuItem";
			this->matricularToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->matricularToolStripMenuItem->Text = L"Matricular";
			this->matricularToolStripMenuItem->Click += gcnew System::EventHandler(this, &ClasesH::MatricularToolStripMenuItem_Click);
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->eliminarToolStripMenuItem->Text = L"Eliminar";
			this->eliminarToolStripMenuItem->Click += gcnew System::EventHandler(this, &ClasesH::EliminarToolStripMenuItem_Click);
			// 
			// cerrarToolStripMenuItem
			// 
			this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
			this->cerrarToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->cerrarToolStripMenuItem->Text = L"Cerrar";
			this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &ClasesH::CerrarToolStripMenuItem_Click);
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(0, 232);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(628, 42);
			this->panel2->TabIndex = 1;
			// 
			// btncerrar
			// 
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(548, 0);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(94, 39);
			this->btncerrar->TabIndex = 0;
			this->btncerrar->Text = L"CERRAR";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &ClasesH::Btncerrar_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(6, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(616, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ALUMNOS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ClasesH
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 274);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ClasesH";
			this->Text = L"CONTROL DE ALUMNOS";
			this->Load += gcnew System::EventHandler(this, &ClasesH::ClasesH_Load);
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
		this->Hide();
	}
	private: System::Void ClasesH_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CerrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this-> Close();

}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void EliminarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MatricularToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MatriculaDeAlumno^ matricularA = gcnew MatriculaDeAlumno();
	matricularA->ShowDialog();
}
private: System::Void Btncerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
};
}
