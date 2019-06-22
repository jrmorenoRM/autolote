#pragma once

using namespace MySql::Data::MySqlClient;
#include "MenuP.h"




namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btniniciar;
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtpass;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btniniciar = (gcnew System::Windows::Forms::Button());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btniniciar
			// 
			this->btniniciar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btniniciar->FlatAppearance->BorderSize = 0;
			this->btniniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btniniciar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btniniciar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btniniciar->Location = System::Drawing::Point(4, 3);
			this->btniniciar->Name = L"btniniciar";
			this->btniniciar->Size = System::Drawing::Size(120, 44);
			this->btniniciar->TabIndex = 0;
			this->btniniciar->Text = L"Iniciar";
			this->btniniciar->UseVisualStyleBackColor = true;
			this->btniniciar->Click += gcnew System::EventHandler(this, &Login::Btniniciar_Click);
			// 
			// btnsalir
			// 
			this->btnsalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsalir->FlatAppearance->BorderSize = 0;
			this->btnsalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnsalir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsalir->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnsalir->Location = System::Drawing::Point(138, 3);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(114, 44);
			this->btnsalir->TabIndex = 1;
			this->btnsalir->Text = L"Cerrar";
			this->btnsalir->UseVisualStyleBackColor = true;
			this->btnsalir->Click += gcnew System::EventHandler(this, &Login::Btnsalir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"BIENVENIDO";
			this->label1->Click += gcnew System::EventHandler(this, &Login::Label1_Click);
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(113, 54);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(129, 20);
			this->txtusuario->TabIndex = 5;
			this->txtusuario->TextChanged += gcnew System::EventHandler(this, &Login::Txtusuario_TextChanged);
			// 
			// txtpass
			// 
			this->txtpass->Location = System::Drawing::Point(113, 88);
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(129, 20);
			this->txtpass->TabIndex = 6;
			this->txtpass->TextChanged += gcnew System::EventHandler(this, &Login::Txtpass_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtpass);
			this->panel1->Controls->Add(this->txtusuario);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 148);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::Panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"PASSWORD:";
			this->label3->Click += gcnew System::EventHandler(this, &Login::Label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"USUARIO:";
			this->label2->Click += gcnew System::EventHandler(this, &Login::Label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btniniciar);
			this->panel2->Controls->Add(this->btnsalir);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 121);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(255, 50);
			this->panel2->TabIndex = 8;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::Panel2_Paint);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(255, 171);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOGIN";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btnsalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Btniniciar_Click(System::Object^ sender, System::EventArgs^ e) {




		String^ user, ^ pass;
		String^ dbuser, ^ dbpass;
		user = txtusuario->Text;
		pass = txtpass->Text;


		String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
		MySqlConnection^ conn = gcnew MySqlConnection(connection);
		String^ query = "SELECT usuario, password FROM usuarios";
		MySqlCommand^ conncmd = gcnew MySqlCommand(query, conn);
		MySqlDataReader^ datareader;



	/*	try {
			conn->Open();
			datareader = conncmd->ExecuteReader();

			while (datareader->Read())
			{
				dbuser = datareader->GetString(0);
				dbpass = datareader->GetString(1);

			}
			if (user == dbuser && pass == dbpass)
			{ 
				MessageBox::Show("Sesion Iniciada Correctamente");*/
		MenuP^ menuP = gcnew MenuP();
		this->Hide();
		menuP->Show();
	/*		}
			else if (user != dbuser)
			{
				MessageBox::Show("Usuario incorrecto");
				txtusuario->Clear();
			}

			else if (pass != dbpass) {
				MessageBox::Show("Password incorrecto");
				txtpass->Clear();
			}
		}
		catch (Exception^ e){
			MessageBox::Show(e->Message);
		}*/
	}

	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Txtpass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
