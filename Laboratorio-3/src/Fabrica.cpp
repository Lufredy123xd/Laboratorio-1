/*
 * Fabrica.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#include "Fabrica.h"

Fabrica* Fabrica::instancia = nullptr;

ControladorUsuario* Fabrica::instanciaUsuario = nullptr;
ControladorVideojuego* Fabrica::instanciaVideojuego = nullptr;
ControladorPartida* Fabrica::instanciaPartida = nullptr;
ControladorSuscripcion* Fabrica::instanciaSuscripcion = nullptr;

Fabrica::Fabrica() {
	// TODO Auto-generated constructor stub
	instanciaUsuario = ControladorUsuario::getInstanciaControladorUsuario();
	instanciaVideojuego = ControladorVideojuego::getInstanciaControladorVideojuego();
	instanciaPartida = ControladorPartida::getInstanciaControladorPartida();
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

ControladorVideojuego* Fabrica::getInstanciaVideojuego()
{
	return this->instanciaVideojuego;
}

ControladorPartida* Fabrica::getInstanciaPartida()
{
	return this->instanciaPartida;
}
ControladorSuscripcion* Fabrica::getInstanciaSuscripcion(){

	return this->instanciaSuscripcion ;
}

