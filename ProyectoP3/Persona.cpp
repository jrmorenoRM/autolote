#include "Persona.h"

#include <iostream>
#include <string>

using namespace std;

Persona::Persona() {

}

Persona::Persona(int identidad, string nom, int edad) {
	identidad = identidad;
	nombre = nom;
	edad = edad;
}

Persona::~Persona() {
}

void Persona::SetEdad(int edad) {
	edad = edad;
}

void Persona::SetNombre(string nom) {
	nombre = nom;
}

void Persona::Setrtn(int identidad) {
	identidad = identidad;
}

int Persona::GetIdentidad() {
	return identidad;
}

string Persona::GetNombre() {
	return nombre;
}

int Persona::GetEdad() {
	return edad;
}


void Persona::Imprimir() {
	cout << " " << endl;
}
