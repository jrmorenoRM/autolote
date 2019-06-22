#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>

using namespace std;

class Persona {

private:
	int identidad;
	string nombre;
	int edad;

public:
	Persona();
	Persona(int, string, int);
	~Persona();

	void Setrtn(int);
	void SetNombre(string);
	void SetEdad(int);

	int GetIdentidad();
	string GetNombre();
	int GetEdad();

	virtual void Imprimir();



};
#endif