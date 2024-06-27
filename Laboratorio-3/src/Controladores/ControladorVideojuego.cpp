/*
 * ControladorVideojuego.cpp
 *
 *  Created on: 23 jun. 2024
 *      Author: n1c0l
 */

#include "ControladorVideojuego.h"


ControladorVideojuego* ControladorVideojuego::instancia = nullptr;

ControladorVideojuego::ControladorVideojuego() {
	// TODO Auto-generated constructor stub

}

ControladorVideojuego::~ControladorVideojuego() {
	// TODO Auto-generated destructor stub
}

ControladorVideojuego* ControladorVideojuego::getInstanciaControladorVideojuego()
{
	if (instancia == nullptr)
	{
		instancia = new ControladorVideojuego();
	}

	return instancia;
}

void ControladorVideojuego::holaVideojuego()
{
	cout<<"Hola soy Videojuego"<<endl;
}
