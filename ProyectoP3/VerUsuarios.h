#pragma once
using namespace MySql::Data::MySqlClient;

#include "AddUsuario.h"
#include "VerUsuarios.h"
#include "NuevoMaestro.h"
#include "VerMaestros.h"
#include "EditarUsuarios.h"
#include "EliminarUsuarios.h"
#include "Vehiculos.h"
#include "MatriculaDeAlumno.h"
#include "MatriculaDeAlumnos2.h"
#include "ClasesH.h"

namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VerUsuarios
	/// </summary>
	public ref class VerUsuarios : public System::Windows::Forms::Form
	{
		String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		MySqlConnection^ conn = gcnew MySqlConnection(connection);
	public:
		VerUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			
			MySqlCommand^ conncmd = gcnew MySqlCommand("Select id, nombre, usuario from usuarios ; ", conn);
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
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VerUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

	protected:


	private: System::Windows::Forms::Button^ btncerrar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ adToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VerUsuarios::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->adToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(763, 466);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VerUsuarios::Panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 431);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(763, 35);
			this->panel2->TabIndex = 4;
			// 
			// btncerrar
			// 
			this->btncerrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btncerrar->Location = System::Drawing::Point(686, 3);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(74, 32);
			this->btncerrar->TabIndex = 2;
			this->btncerrar->Text = L"Cerrar";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &VerUsuarios::Btncerrar_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(150, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(415, 194);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VerUsuarios::DataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(201, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuarios Autoescuela Moreno";
			this->label1->Click += gcnew System::EventHandler(this, &VerUsuarios::Label1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DodgerBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->adToolStripMenuItem,
					this->deleteToolStripMenuItem, this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(763, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// adToolStripMenuItem
			// 
			this->adToolStripMenuItem->Name = L"adToolStripMenuItem";
			this->adToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->adToolStripMenuItem->Text = L"Add";
			this->adToolStripMenuItem->Click += gcnew System::EventHandler(this, &VerUsuarios::AdToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &VerUsuarios::DeleteToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &VerUsuarios::EditToolStripMenuItem_Click);
			// 
			// VerUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 466);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"VerUsuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CONTROL DE USUARIOS";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btncerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void TableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	

}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	

}
private: System::Void AdToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddUsuario^ addu = gcnew AddUsuario();
	addu->ShowDialog();
	
}
private: System::Void DeleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarUsuarios^ eu = gcnew EliminarUsuarios();
	eu->Show();
}
private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarUsuarios^ editaru = gcnew EditarUsuarios();
	editaru->Show();
}
};
}
