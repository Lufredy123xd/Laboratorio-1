/*
 * ControladorUsuario.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#include "ControladorUsuario.h"

ControladorUsuario* ControladorUsuario::instancia = nullptr;

ControladorUsuario::ControladorUsuario() {
	// TODO Auto-generated constructor stub

}

ControladorUsuario::~ControladorUsuario() {
	// TODO Auto-generated destructor stub
}

ControladorUsuario* ControladorUsuario::getInstanciaControladorUsuario()
{
	if (instancia == nullptr)
	{
		instancia = new ControladorUsuario();
	}

	return instancia;
}

void ControladorUsuario::holaUsuario(){

	cout<<"Hola soy un usuario"<<endl;
}
