#pragma once
using namespace MySql::Data::MySqlClient;

namespace ProyectoP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUsuario
	/// </summary>
	public ref class AddUsuario : public System::Windows::Forms::Form
	{
	public:
		AddUsuario(void)
		{
			InitializeComponent();
			txtid->Enabled = false ();


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btningresar;
	private: System::Windows::Forms::Button^ btncerrar;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtpass;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txtpassword2;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddUsuario::typeid));
			this->btningresar = (gcnew System::Windows::Forms::Button());
			this->btncerrar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtpass = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtpassword2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btningresar
			// 
			this->btningresar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btningresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btningresar->FlatAppearance->BorderSize = 0;
			this->btningresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btningresar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btningresar->ForeColor = System::Drawing::Color::AliceBlue;
			this->btningresar->Location = System::Drawing::Point(25, 3);
			this->btningresar->Name = L"btningresar";
			this->btningresar->Size = System::Drawing::Size(80, 47);
			this->btningresar->TabIndex = 0;
			this->btningresar->Text = L"Agregar";
			this->btningresar->UseVisualStyleBackColor = true;
			this->btningresar->Click += gcnew System::EventHandler(this, &AddUsuario::Btningresar_Click);
			// 
			// btncerrar
			// 
			this->btncerrar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btncerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncerrar->FlatAppearance->BorderSize = 0;
			this->btncerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncerrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncerrar->ForeColor = System::Drawing::Color::AliceBlue;
			this->btncerrar->Location = System::Drawing::Point(146, 3);
			this->btncerrar->Name = L"btncerrar";
			this->btncerrar->Size = System::Drawing::Size(77, 47);
			this->btncerrar->TabIndex = 1;
			this->btncerrar->Text = L"Cancelar";
			this->btncerrar->UseVisualStyleBackColor = true;
			this->btncerrar->Click += gcnew System::EventHandler(this, &AddUsuario::Btncerrar_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ID:";
			this->label2->Click += gcnew System::EventHandler(this, &AddUsuario::Label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nombre:";
			this->label3->Click += gcnew System::EventHandler(this, &AddUsuario::Label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Usuario:";
			this->label4->Click += gcnew System::EventHandler(this, &AddUsuario::Label4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(19, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Password:";
			this->label5->Click += gcnew System::EventHandler(this, &AddUsuario::Label5_Click);
			// 
			// txtid
			// 
			this->txtid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtid->Location = System::Drawing::Point(128, 11);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(111, 20);
			this->txtid->TabIndex = 7;
			this->txtid->Text = L"ID AUTOMATICO";
			this->txtid->TextChanged += gcnew System::EventHandler(this, &AddUsuario::Txtid_TextChanged);
			// 
			// txtnombre
			// 
			this->txtnombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtnombre->Location = System::Drawing::Point(128, 37);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(111, 20);
			this->txtnombre->TabIndex = 8;
			this->txtnombre->TextChanged += gcnew System::EventHandler(this, &AddUsuario::Txtnombre_TextChanged);
			this->txtnombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddUsuario::Txtnombre_KeyPress);
			// 
			// txtusuario
			// 
			this->txtusuario->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtusuario->Location = System::Drawing::Point(128, 63);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(111, 20);
			this->txtusuario->TabIndex = 9;
			this->txtusuario->TextChanged += gcnew System::EventHandler(this, &AddUsuario::Txtusuario_TextChanged);
			// 
			// txtpass
			// 
			this->txtpass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtpass->Location = System::Drawing::Point(128, 89);
			this->txtpass->Name = L"txtpass";
			this->txtpass->PasswordChar = '*';
			this->txtpass->Size = System::Drawing::Size(111, 20);
			this->txtpass->TabIndex = 10;
			this->txtpass->TextChanged += gcnew System::EventHandler(this, &AddUsuario::Txtpass_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->txtpassword2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txtpass);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txtusuario);
			this->panel1->Controls->Add(this->txtnombre);
			this->panel1->Controls->Add(this->txtid);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(-1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(260, 192);
			this->panel1->TabIndex = 11;
			// 
			// txtpassword2
			// 
			this->txtpassword2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtpassword2->Location = System::Drawing::Point(128, 115);
			this->txtpassword2->Name = L"txtpassword2";
			this->txtpassword2->PasswordChar = '*';
			this->txtpassword2->Size = System::Drawing::Size(111, 20);
			this->txtpassword2->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Repetir Password:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->btningresar);
			this->panel2->Controls->Add(this->btncerrar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(0, 142);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(259, 53);
			this->panel2->TabIndex = 12;
			// 
			// AddUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(259, 195);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddUsuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADD USUARIO";
			this->Load += gcnew System::EventHandler(this, &AddUsuario::AddUsuario_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btncerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void Btningresar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		
		if (txtpass->Text != txtpassword2->Text) {

			MessageBox::Show("Contraseñas no coinciden");
			txtpass->Clear();
			txtpassword2->Clear();
		}
		else {
				
			try
			{
				String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
				MySqlConnection^ conn = gcnew MySqlConnection(connection);
			    MySqlCommand^ conncmd = gcnew MySqlCommand("insert into usuarios (nombre, usuario, password) values ('" + this->txtnombre->Text + "' , '" + this->txtusuario->Text + "' , '" + this->txtpass->Text + "') ;", conn);
				MySqlDataReader^ datareader;

				conn->Open();
				datareader = conncmd->ExecuteReader();
				while (datareader->Read())
				{


				}
				MessageBox::Show("Usuario creado con exito");
				txtid->Clear();
				txtnombre->Clear();
				txtpass->Clear();
				txtusuario->Clear();
				txtpassword2->Clear();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}


	

}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtid->Enabled = false;
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtnombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtpass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

		
private: System::Void Txtnombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 1);
	
}
		  private: System::Void validaciontexto(System::Windows::Forms::KeyPressEventArgs^ e, int n) {
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
		 
};
}
