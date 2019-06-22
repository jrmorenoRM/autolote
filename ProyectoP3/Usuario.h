#pragma once
#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>
#include "Persona.h"

using namespace std;

class Usuario : public Persona {

private:
	int codigo;
	string pass;
	string usuario;


public:
	Usuario();
	Usuario(int, string, int, int, string, string);
	~Usuario();

	void SetCodigo(int);
	void SetUsuario(string);
	void SetPass(string);


	int GetCodigo();
	string GetUsuario();
	string GetPass();



	void Imprimir();



};
#endif
