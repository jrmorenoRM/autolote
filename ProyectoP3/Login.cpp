#include "Login.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Pode Ser int main Ou void main
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ProyectoP3::Login form;
	Application::Run(% form);
}