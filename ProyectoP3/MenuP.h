#pragma once
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
#include "CHorarios.h"
#include "NotasFinales.h"	







namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuP
	/// </summary>
	public ref class MenuP : public System::Windows::Forms::Form
	{
	public:
		MenuP(void)
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
		~MenuP()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ menu_Vertical;
	private: System::Windows::Forms::Panel^ menu_Horizonantal;
	private: System::Windows::Forms::Panel^ panelcontenedor;



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnusuarios;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btncontroldeclases;

	private: System::Windows::Forms::Button^ btncontroldevehiculos;

	private: System::Windows::Forms::Label^ lblhora;
	private: System::Windows::Forms::Label^ lblfecha;


	private: System::Windows::Forms::Timer^ horafecha;
	private: System::Windows::Forms::Button^ btnposteodenotas;
	private: System::Windows::Forms::Button^ button1;











protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuP::typeid));
			this->menu_Vertical = (gcnew System::Windows::Forms::Panel());
			this->btnposteodenotas = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btncontroldeclases = (gcnew System::Windows::Forms::Button());
			this->btncontroldevehiculos = (gcnew System::Windows::Forms::Button());
			this->btnusuarios = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menu_Horizonantal = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelcontenedor = (gcnew System::Windows::Forms::Panel());
			this->lblfecha = (gcnew System::Windows::Forms::Label());
			this->lblhora = (gcnew System::Windows::Forms::Label());
			this->horafecha = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menu_Vertical->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menu_Horizonantal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelcontenedor->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu_Vertical
			// 
			this->menu_Vertical->BackColor = System::Drawing::Color::DodgerBlue;
			this->menu_Vertical->Controls->Add(this->button1);
			this->menu_Vertical->Controls->Add(this->btnposteodenotas);
			this->menu_Vertical->Controls->Add(this->button4);
			this->menu_Vertical->Controls->Add(this->button3);
			this->menu_Vertical->Controls->Add(this->btncontroldeclases);
			this->menu_Vertical->Controls->Add(this->btncontroldevehiculos);
			this->menu_Vertical->Controls->Add(this->btnusuarios);
			this->menu_Vertical->Controls->Add(this->label1);
			this->menu_Vertical->Controls->Add(this->pictureBox2);
			this->menu_Vertical->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu_Vertical->Location = System::Drawing::Point(0, 0);
			this->menu_Vertical->Name = L"menu_Vertical";
			this->menu_Vertical->Size = System::Drawing::Size(271, 650);
			this->menu_Vertical->TabIndex = 2;
			this->menu_Vertical->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuP::Menu_Vertical_Paint);
			// 
			// btnposteodenotas
			// 
			this->btnposteodenotas->BackColor = System::Drawing::Color::Transparent;
			this->btnposteodenotas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnposteodenotas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnposteodenotas->FlatAppearance->BorderSize = 0;
			this->btnposteodenotas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnposteodenotas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnposteodenotas->ForeColor = System::Drawing::SystemColors::Control;
			this->btnposteodenotas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnposteodenotas.Image")));
			this->btnposteodenotas->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnposteodenotas->Location = System::Drawing::Point(8, 378);
			this->btnposteodenotas->Name = L"btnposteodenotas";
			this->btnposteodenotas->Size = System::Drawing::Size(284, 43);
			this->btnposteodenotas->TabIndex = 8;
			this->btnposteodenotas->Text = L"POSTEO DE NOTAS";
			this->btnposteodenotas->UseVisualStyleBackColor = false;
			this->btnposteodenotas->Click += gcnew System::EventHandler(this, &MenuP::Btnposteodenotas_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button4->Location = System::Drawing::Point(3, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(296, 53);
			this->button4->TabIndex = 7;
			this->button4->Text = L"CONTROL DE MAESTROS";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MenuP::Button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 206);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(296, 43);
			this->button3->TabIndex = 6;
			this->button3->Text = L"CONTROL DE ALUMNOS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MenuP::Button3_Click);
			// 
			// btncontroldeclases
			// 
			this->btncontroldeclases->BackColor = System::Drawing::Color::Transparent;
			this->btncontroldeclases->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btncontroldeclases->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncontroldeclases->FlatAppearance->BorderSize = 0;
			this->btncontroldeclases->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncontroldeclases->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncontroldeclases->ForeColor = System::Drawing::SystemColors::Control;
			this->btncontroldeclases->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncontroldeclases.Image")));
			this->btncontroldeclases->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btncontroldeclases->Location = System::Drawing::Point(0, 311);
			this->btncontroldeclases->Name = L"btncontroldeclases";
			this->btncontroldeclases->Size = System::Drawing::Size(296, 50);
			this->btncontroldeclases->TabIndex = 5;
			this->btncontroldeclases->Text = L"CONTROL DE CLASES";
			this->btncontroldeclases->UseVisualStyleBackColor = false;
			this->btncontroldeclases->Click += gcnew System::EventHandler(this, &MenuP::Button2_Click_1);
			// 
			// btncontroldevehiculos
			// 
			this->btncontroldevehiculos->BackColor = System::Drawing::Color::Transparent;
			this->btncontroldevehiculos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btncontroldevehiculos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncontroldevehiculos->FlatAppearance->BorderSize = 0;
			this->btncontroldevehiculos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncontroldevehiculos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncontroldevehiculos->ForeColor = System::Drawing::SystemColors::Control;
			this->btncontroldevehiculos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncontroldevehiculos.Image")));
			this->btncontroldevehiculos->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btncontroldevehiculos->Location = System::Drawing::Point(8, 265);
			this->btncontroldevehiculos->Name = L"btncontroldevehiculos";
			this->btncontroldevehiculos->Size = System::Drawing::Size(288, 40);
			this->btncontroldevehiculos->TabIndex = 4;
			this->btncontroldevehiculos->Text = L"CONTROL DE VEHICULOS";
			this->btncontroldevehiculos->UseVisualStyleBackColor = false;
			this->btncontroldevehiculos->Click += gcnew System::EventHandler(this, &MenuP::Button1_Click_1);
			// 
			// btnusuarios
			// 
			this->btnusuarios->BackColor = System::Drawing::Color::Transparent;
			this->btnusuarios->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnusuarios->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnusuarios->FlatAppearance->BorderSize = 0;
			this->btnusuarios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnusuarios->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnusuarios->ForeColor = System::Drawing::SystemColors::Control;
			this->btnusuarios->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnusuarios.Image")));
			this->btnusuarios->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnusuarios->Location = System::Drawing::Point(3, 96);
			this->btnusuarios->Name = L"btnusuarios";
			this->btnusuarios->Size = System::Drawing::Size(293, 45);
			this->btnusuarios->TabIndex = 3;
			this->btnusuarios->Text = L"CONTROL DE USUARIOS";
			this->btnusuarios->UseVisualStyleBackColor = false;
			this->btnusuarios->Click += gcnew System::EventHandler(this, &MenuP::Btnusuarios_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(66, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"AUTOESCUELA MORENO";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(12, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MenuP::PictureBox2_Click);
			// 
			// menu_Horizonantal
			// 
			this->menu_Horizonantal->BackColor = System::Drawing::Color::DodgerBlue;
			this->menu_Horizonantal->Controls->Add(this->pictureBox1);
			this->menu_Horizonantal->Dock = System::Windows::Forms::DockStyle::Top;
			this->menu_Horizonantal->Location = System::Drawing::Point(271, 0);
			this->menu_Horizonantal->Name = L"menu_Horizonantal";
			this->menu_Horizonantal->Size = System::Drawing::Size(1029, 50);
			this->menu_Horizonantal->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(6, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MenuP::PictureBox1_Click);
			// 
			// panelcontenedor
			// 
			this->panelcontenedor->Controls->Add(this->lblfecha);
			this->panelcontenedor->Controls->Add(this->lblhora);
			this->panelcontenedor->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelcontenedor->Location = System::Drawing::Point(271, 600);
			this->panelcontenedor->Name = L"panelcontenedor";
			this->panelcontenedor->Size = System::Drawing::Size(1029, 50);
			this->panelcontenedor->TabIndex = 4;
			// 
			// lblfecha
			// 
			this->lblfecha->AutoSize = true;
			this->lblfecha->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfecha->Location = System::Drawing::Point(3, 14);
			this->lblfecha->Name = L"lblfecha";
			this->lblfecha->Size = System::Drawing::Size(96, 33);
			this->lblfecha->TabIndex = 7;
			this->lblfecha->Text = L"label3";
			this->lblfecha->Click += gcnew System::EventHandler(this, &MenuP::Lblfecha_Click);
			// 
			// lblhora
			// 
			this->lblhora->AutoSize = true;
			this->lblhora->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblhora->Location = System::Drawing::Point(499, 3);
			this->lblhora->Name = L"lblhora";
			this->lblhora->Size = System::Drawing::Size(131, 44);
			this->lblhora->TabIndex = 6;
			this->lblhora->Text = L"label2";
			// 
			// horafecha
			// 
			this->horafecha->Enabled = true;
			this->horafecha->Tick += gcnew System::EventHandler(this, &MenuP::Horafecha_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(8, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 43);
			this->button1->TabIndex = 9;
			this->button1->Text = L"NOTAS DE ALUMNOS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuP::Button1_Click_2);
			// 
			// MenuP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1300, 650);
			this->Controls->Add(this->panelcontenedor);
			this->Controls->Add(this->menu_Horizonantal);
			this->Controls->Add(this->menu_Vertical);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Name = L"MenuP";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AUTOESCUELA MORENO";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MenuP::MenuP_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MenuP::MenuP_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MenuP::MenuP_Load);
			this->menu_Vertical->ResumeLayout(false);
			this->menu_Vertical->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menu_Horizonantal->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelcontenedor->ResumeLayout(false);
			this->panelcontenedor->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CerrarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Sesion Cerrada");
		this->Close();

	}
	private: System::Void FlowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MenuP_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AgregarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void TrailersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void NuevoMaestroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		NuevoMaestro^ nm = gcnew NuevoMaestro();
		nm->Show();
	}
	private: System::Void ListadoMaestrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void ModificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void EliminarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void AutomaticoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VehiculosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void EliminarToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void FormularioMatriculaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MatriculaDeAlumno^ mda = gcnew MatriculaDeAlumno();
		mda->Show();
	}
	private: System::Void ControlDeMaestrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void PruebasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
		
		
		
	}
private: System::Void MenuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
    if (menu_Vertical->Width == 271) {
		menu_Vertical->Width = 65;
	}
	else {
		menu_Vertical->Width = 271;
	}
}
private: System::Void PictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
	private: System::Void I_maximizar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		
private: System::Void Btnusuarios_Click(System::Object^ sender, System::EventArgs^ e) {
	VerUsuarios^ vu = gcnew VerUsuarios();
	vu->MdiParent = this;
	vu->Show();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	VerMaestros^ vm = gcnew VerMaestros();
	vm->MdiParent = this;
	vm->Show();
}
private: System::Void Menu_Vertical_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void MenuP_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	
}
private: System::Void MenuP_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ClasesH^ ch = gcnew	ClasesH();
	ch->MdiParent = this;
	ch->Show();
}
private: System::Void PictureBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Vehiculos^ vh = gcnew Vehiculos();
	vh->MdiParent = this;
	vh->Show();
}


private: System::Void Button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	CHorarios^ ch = gcnew CHorarios();
	ch->MdiParent = this;
	ch->Show();

}
private: System::Void Horafecha_Tick(System::Object^ sender, System::EventArgs^ e) {
	lblhora->Text = DateTime::Now.ToLongTimeString();
	lblfecha->Text = DateTime::Now.ToLongDateString();

}
private: System::Void Lblfecha_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btnposteodenotas_Click(System::Object^ sender, System::EventArgs^ e) {
	ResultadosLeccion^ rdl = gcnew ResultadosLeccion();
	rdl->MdiParent = this;
	rdl->Show();

}
private: System::Void Button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	NotasFinales^ nf = gcnew NotasFinales();
	nf->MdiParent = this;
	nf->Show();
}
};
}
