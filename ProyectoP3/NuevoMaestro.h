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
	/// Resumen de NuevoMaestro
	/// </summary>
	public ref class NuevoMaestro : public System::Windows::Forms::Form
	{
	public:
		NuevoMaestro(void)
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
		~NuevoMaestro()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ genero;
		String^ estadoCivil;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::TextBox^ txxcorreo;



	private: System::Windows::Forms::TextBox^ txtedad;

	private: System::Windows::Forms::TextBox^ txtidentidad;

	private: System::Windows::Forms::TextBox^ txtnombre;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ txtapellido;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NuevoMaestro::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->txtapellido = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->txxcorreo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtedad = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtidentidad = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(354, 443);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NuevoMaestro::Panel1_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->txtapellido);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->txxcorreo);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtedad);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtidentidad);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtnombre);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(6, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(339, 306);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Personales";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &NuevoMaestro::GroupBox1_Enter);
			// 
			// btnsalir
			// 
			this->btnsalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsalir->FlatAppearance->BorderSize = 0;
			this->btnsalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnsalir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnsalir->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnsalir->Location = System::Drawing::Point(197, 3);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(121, 40);
			this->btnsalir->TabIndex = 20;
			this->btnsalir->Text = L"Cancelar";
			this->btnsalir->UseVisualStyleBackColor = true;
			this->btnsalir->Click += gcnew System::EventHandler(this, &NuevoMaestro::Btnsalir_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(293, 265);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(50, 20);
			this->radioButton3->TabIndex = 19;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Otro";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &NuevoMaestro::RadioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(221, 265);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 20);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Casado";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &NuevoMaestro::RadioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(153, 265);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 20);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Soltero";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &NuevoMaestro::RadioButton1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(246, 237);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(79, 20);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Femenino";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &NuevoMaestro::CheckBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(158, 239);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 20);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Masculino";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &NuevoMaestro::CheckBox1_CheckedChanged);
			// 
			// txtapellido
			// 
			this->txtapellido->Location = System::Drawing::Point(158, 79);
			this->txtapellido->Name = L"txtapellido";
			this->txtapellido->Size = System::Drawing::Size(154, 21);
			this->txtapellido->TabIndex = 14;
			this->txtapellido->TextChanged += gcnew System::EventHandler(this, &NuevoMaestro::Txtapellido_TextChanged);
			this->txtapellido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NuevoMaestro::Txtapellido_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(9, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Apellidos:";
			this->label8->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label8_Click);
			// 
			// btnagregar
			// 
			this->btnagregar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnagregar->FlatAppearance->BorderSize = 0;
			this->btnagregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnagregar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnagregar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnagregar->Location = System::Drawing::Point(18, -2);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(121, 40);
			this->btnagregar->TabIndex = 0;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = true;
			this->btnagregar->Click += gcnew System::EventHandler(this, &NuevoMaestro::Btnagregar_Click);
			// 
			// txxcorreo
			// 
			this->txxcorreo->Location = System::Drawing::Point(160, 206);
			this->txxcorreo->Name = L"txxcorreo";
			this->txxcorreo->Size = System::Drawing::Size(152, 21);
			this->txxcorreo->TabIndex = 12;
			this->txxcorreo->TextChanged += gcnew System::EventHandler(this, &NuevoMaestro::Txxcorreo_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nombres:";
			this->label3->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label3_Click);
			// 
			// txtedad
			// 
			this->txtedad->Location = System::Drawing::Point(160, 166);
			this->txtedad->Name = L"txtedad";
			this->txtedad->Size = System::Drawing::Size(152, 21);
			this->txtedad->TabIndex = 11;
			this->txtedad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NuevoMaestro::Txtedad_KeyPress);
			this->txtedad->ParentChanged += gcnew System::EventHandler(this, &NuevoMaestro::Txtedad_ParentChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Identidad:";
			this->label4->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label4_Click);
			// 
			// txtidentidad
			// 
			this->txtidentidad->Location = System::Drawing::Point(160, 123);
			this->txtidentidad->Name = L"txtidentidad";
			this->txtidentidad->Size = System::Drawing::Size(152, 21);
			this->txtidentidad->TabIndex = 10;
			this->txtidentidad->TextChanged += gcnew System::EventHandler(this, &NuevoMaestro::TextBox2_TextChanged);
			this->txtidentidad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NuevoMaestro::Txtidentidad_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Edad:";
			this->label5->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label5_Click);
			// 
			// txtnombre
			// 
			this->txtnombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtnombre->Location = System::Drawing::Point(158, 38);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(154, 21);
			this->txtnombre->TabIndex = 9;
			this->txtnombre->TextChanged += gcnew System::EventHandler(this, &NuevoMaestro::TextBox1_TextChanged);
			this->txtnombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &NuevoMaestro::Txtnombre_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Correo Electronico:";
			this->label6->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Estado Civil:";
			this->label2->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Sexo:";
			this->label7->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Formulario Ingreso de Maestro";
			this->label1->Click += gcnew System::EventHandler(this, &NuevoMaestro::Label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel2->Controls->Add(this->btnsalir);
			this->panel2->Controls->Add(this->btnagregar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 350);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(349, 50);
			this->panel2->TabIndex = 1;
			// 
			// NuevoMaestro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 400);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"NuevoMaestro";
			this->Text = L"INGRESO DE MAESTRO";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Btnsalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	genero = "Masculino";
}
private: System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	genero = "Femenino";
}
private: System::Void RadioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	estadoCivil = "Soltero";
}
private: System::Void RadioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	estadoCivil = "Casado";
}
private: System::Void RadioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	estadoCivil = "Otro";
}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connection = "datasource=Localhost; port=3306; user=root; password= ; database=autoescuela";
	MySqlConnection^ conn = gcnew MySqlConnection(connection);
	MySqlCommand^ conncmd = gcnew MySqlCommand("insert into maestros (nombre, edad, identidad, ecivil, sexo, apellido, email) values ('" + this->txtnombre->Text + "' , '" + this->txtedad->Text + "' , '" + this->txtidentidad->Text + "' , '" + estadoCivil + "' , '" + genero + "' , '" + this->txtapellido->Text + "' , '" + this->txxcorreo ->Text + "' ) ;", conn);
	MySqlDataReader^ datareader;

	try
	{
		conn->Open();
		datareader = conncmd->ExecuteReader();
		while (datareader->Read())
		{
			
		}
		MessageBox::Show("Profesor agregado con exito");
		txtapellido->Clear();
		txtnombre->Clear();
		txtedad->Clear();
		txtidentidad->Clear();
		txxcorreo->Clear();

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message + e->StackTrace);
	}
}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txxcorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtnombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	validaciontexto(e, 1);
	
	

}
private: System::Void Txtapellido_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 1);
}
private: System::Void Txtidentidad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validaciontexto(e, 2);
}
private: System::Void Txtedad_ParentChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Txtedad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	

	validaciontexto(e, 2);
}
private: System::Void Txtapellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
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
