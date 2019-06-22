#include "Persona.h"
#include "Usuario.h"

#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario() {

}

Usuario::Usuario(int identidad, string nom, int edad, int cod, string pass, string usuario) : Persona(identidad, nom, edad) {
	codigo = cod;
	usuario = usuario;
	pass = pass;

}

Usuario::~Usuario() {
}

void Usuario::SetCodigo(int cod) {
	codigo = cod;
}

void Usuario::SetUsuario(string usuario) {
	usuario = usuario;
}

void Usuario::SetPass(string pass) {
	pass = pass;
}



string Usuario::GetPass() {
	return pass;
}


string Usuario::GetUsuario() {
	return usuario;
}

int Usuario::GetCodigo() {
	return codigo;
}


void Usuario::Imprimir() {
	cout << "" << endl;
}
