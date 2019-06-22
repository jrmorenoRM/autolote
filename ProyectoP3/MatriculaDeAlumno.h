#pragma once
using namespace MySql::Data::MySqlClient;
#include "MatriculaDeAlumnos2.h"

namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MatriculaDeAlumno
	/// </summary>
	public ref class MatriculaDeAlumno : public System::Windows::Forms::Form
	{
	public:
		MatriculaDeAlumno(void)
		{
			InitializeComponent();
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MatriculaDeAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
		String^ Ciudades;
		String^ sexo;
		String^ trabajo;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ txtidentidad;

	private: System::Windows::Forms::TextBox^ txtedad;

	private: System::Windows::Forms::TextBox^ txtapellido;

	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::Button^ bntagregar;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btncerrar;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatriculaDeAlumno::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->txtidentidad = (gcnew System::Windows::Forms::TextBox());
			this->txtedad = (gcnew System::Windows::Forms::TextBox());
			this->txtapellido = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bntagregar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(4, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(280, 427);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->txtidentidad);
			this->groupBox1->Controls->Add(this->txtedad);
			this->groupBox1->Controls->Add(this->txtapellido);
			this->groupBox1->Controls->Add(this->txtnombre);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(3, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(282, 324);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Personales";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(88, 239);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 24);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MatriculaDeAlumno::ComboBox1_SelectedIndexChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(171, 152);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(79, 20);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Femenino";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MatriculaDeAlumno::CheckBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(83, 152);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 20);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Masculino";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MatriculaDeAlumno::CheckBox1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(129, 275);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(44, 20);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NO";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MatriculaDeAlumno::RadioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(88, 275);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(35, 20);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"SI";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MatriculaDeAlumno::RadioButton1_CheckedChanged);
			// 
			// txtidentidad
			// 
			this->txtidentidad->Location = System::Drawing::Point(83, 191);
			this->txtidentidad->Name = L"txtidentidad";
			this->txtidentidad->Size = System::Drawing::Size(167, 21);
			this->txtidentidad->TabIndex = 12;
			this->txtidentidad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatriculaDeAlumno::Txtidentidad_KeyPress);
			// 
			// txtedad
			// 
			this->txtedad->Location = System::Drawing::Point(83, 112);
			this->txtedad->Name = L"txtedad";
			this->txtedad->Size = System::Drawing::Size(167, 21);
			this->txtedad->TabIndex = 11;
			this->txtedad->TextChanged += gcnew System::EventHandler(this, &MatriculaDeAlumno::Txtedad_TextChanged);
			this->txtedad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatriculaDeAlumno::Txtedad_KeyPress);
			// 
			// txtapellido
			// 
			this->txtapellido->Location = System::Drawing::Point(83, 75);
			this->txtapellido->Name = L"txtapellido";
			this->txtapellido->Size = System::Drawing::Size(167, 21);
			this->txtapellido->TabIndex = 10;
			this->txtapellido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatriculaDeAlumno::Txtapellido_KeyPress);
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(83, 35);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(167, 21);
			this->txtnombre->TabIndex = 9;
			this->txtnombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MatriculaDeAlumno::Txtnombre_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(11, 119);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Edad:";
			this->label8->Click += gcnew System::EventHandler(this, &MatriculaDeAlumno::Label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(11, 194);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Identidad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"¿Trabaja\?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Sexo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Reside en:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(10, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Apellido:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FORMULARIO DE MATRICULA";
			this->label1->Click += gcnew System::EventHandler(this, &MatriculaDeAlumno::Label1_Click);
			// 
			// bntagregar
			// 
			this->bntagregar->FlatAppearance->BorderSize = 0;
			this->bntagregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bntagregar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntagregar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bntagregar->Location = System::Drawing::Point(25, 4);
			this->bntagregar->Name = L"bntagregar";
			this->bntagregar->Size = System::Drawing::Size(105, 37);
			this->bntagregar->TabIndex = 18;
			this->bntagregar->Text = L"AGREGAR";
			this->bntagregar->UseVisualStyleBackColor = true;
			this->bntagregar->Click += gcnew System::EventHandler(this, &MatriculaDeAlumno::Bntagregar_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->bntagregar);
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 371);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(289, 45);
			this->panel2->TabIndex = 1;
			// 
			// btncerrar
			// 
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncerrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncerrar->Location = System::Drawing::Point(163, 0);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(105, 42);
			this->btncerrar->TabIndex = 18;
			this->btncerrar->Text = L"CERRAR";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &MatriculaDeAlumno::Bntagregar_Click);
			// 
			// MatriculaDeAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 416);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MatriculaDeAlumno";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MatriculaDeAlumno";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ combo = comboBox1->Text;
	
}

		 private: void Fillcombo(void){
		 
		 
		 String^ combociudades = comboBox1->Text;
		 String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		 MySqlConnection^ conn = gcnew MySqlConnection(connection);
		 MySqlCommand^ conncmd = gcnew MySqlCommand("select * from departamentos ;", conn);
		 MySqlDataReader^ datareader;

		 try
		 {
			 conn->Open();
			 datareader = conncmd->ExecuteReader();
			 while (datareader->Read())
			 {
				 String^ cCiudades;
				 cCiudades = datareader->GetString("ciudad");
				 comboBox1->Items->Add(cCiudades);
 }


		 }
		 catch (Exception^ e)
		 {
			 MessageBox::Show(e->Message + e->StackTrace);
		 }
		 }
private: System::Void Bntagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
	MySqlConnection^ conn = gcnew MySqlConnection(connection);
	MySqlCommand^ conncmd = gcnew MySqlCommand("insert into alumnos (nombre, apellido, edad, sexo, identidad, trabaja, ciudad) values ('" + this->txtnombre->Text + "' , '" + this->txtapellido->Text + "'  , '" + this->txtedad->Text + "' , '" + sexo + "' , '" + this->txtidentidad->Text + "'  , '" + trabajo + "' , '" + comboBox1->Text + "' ) ;", conn);
	MySqlDataReader^ datareader;

	try
	{
		conn->Open();
		datareader = conncmd->ExecuteReader();
		while (datareader->Read())
		{
		
		}
		MessageBox::Show("Alumno creado con exito");
		MatriculaDeAlumnos2^ mda2 = gcnew MatriculaDeAlumnos2();
		this->Close();
		mda2->ShowDialog();

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message + e->StackTrace);
	}
}
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sexo = "Masculino";
}
private: System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sexo = "Femenino";
}
private: System::Void RadioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	trabajo = "Si";
}
private: System::Void RadioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	trabajo = "No";
}
private: System::Void Txtedad_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Txtedad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtidentidad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtnombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 1);
}
	private: System::Void Txtapellido_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		validaciontexto(e, 1);
	}
		 

		private: System::Void validaciontexto(System::Windows::Forms::KeyPressEventArgs^ e, int n)
		{
			switch (n)
			{
			case 1:
			{
				if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar))
				{
					e->Handled = true;
					MessageBox::Show("Solo se aceptan letras", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				break;
			}

			case 2:
			{
				if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar))
				{
					e->Handled = true;
					MessageBox::Show("Solo se aceptan numeros", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				break;
			}

			default:
				break;
			}
		}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
