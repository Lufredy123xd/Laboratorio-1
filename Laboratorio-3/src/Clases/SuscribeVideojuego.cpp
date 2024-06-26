/*
 * SuscribeVideojuego.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#include "SuscribeVideojuego.h"

SuscribeVideojuego::SuscribeVideojuego() {
	// TODO Auto-generated constructor stub

}

SuscribeVideojuego::~SuscribeVideojuego() {
	// TODO Auto-generated destructor stub
}

void SuscribeVideojuego::setCostoSuscripcion(int nuevoCosto)
{
	this->costoSuscripcion = nuevoCosto;
}

void SuscribeVideojuego::setSuscripcion(Suscripcion* nuevaSuscripcion)
{
	this->suscripcion = nuevaSuscripcion;
}

Suscripcion* SuscribeVideojuego::getSuscripcion()
{
	return this->suscripcion;
}

int SuscribeVideojuego::getCostoSuscripcion()
{
	return this->costoSuscripcion;
}
