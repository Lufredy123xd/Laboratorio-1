/*
 * ControladorPartida.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#include "ControladorPartida.h"

ControladorPartida* ControladorPartida::instanciaPartida = nullptr;

ControladorPartida::ControladorPartida() {
	// TODO Auto-generated constructor stub

}

ControladorPartida* ControladorPartida::getInstanciaPartida()
{
	if (instanciaPartida==NULL)
	{
		instanciaPartida=new ControladorPartida();
	}else
	{
		return instanciaPartida;
	}
}

ControladorPartida::~ControladorPartida() {
	// TODO Auto-generated destructor stub
}

