/*
 * Fabrica.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#include "Fabrica.h"

Fabrica* Fabrica::instancia = nullptr;
ControladorUsuario* Fabrica::instanciaUsuario = nullptr;
ControladorSuscripcion* Fabrica::instanciaSuscripcion = nullptr;

Fabrica::Fabrica() {
	// TODO Auto-generated constructor stub
	instanciaUsuario = ControladorUsuario::getInstanciaControladorUsuario();
	instanciaSuscripcion = ControladorSuscripcion::getInstanciaControladorSuscripcion();
}

Fabrica::~Fabrica() {
	// TODO Auto-generated destructor stub
}

Fabrica* Fabrica::getInstanciaFabrica()
{
	if (instancia == nullptr)
	{
		instancia = new Fabrica();
	}


	return instancia;
}

ControladorUsuario* Fabrica::getInstanciaUsuario(){

	return this->instanciaUsuario ;
}

ControladorSuscripcion* Fabrica::getInstanciaSuscripcion(){

	return this->instanciaSuscripcion ;
}
