/*
 * ControladorVideojuego.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#include "ControladorVideojuego.h"

ControladorVideojuego* ControladorVideojuego::instanciaVideojuego = nullptr;

ControladorVideojuego::ControladorVideojuego() {
	// TODO Auto-generated constructor stub

}

ControladorVideojuego* ControladorVideojuego::getInstanciaVideojuego()
{
	if (instanciaVideojuego==NULL)
		{
			instanciaVideojuego=new ControladorVideojuego();
		}else
		{
			return instanciaVideojuego;
		}
}

ControladorVideojuego::~ControladorVideojuego() {
	// TODO Auto-generated destructor stub
}

