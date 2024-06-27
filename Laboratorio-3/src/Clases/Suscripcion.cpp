/*
 * Suscripcion.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#include "Suscripcion.h"

Suscripcion::Suscripcion() {
	// TODO Auto-generated constructor stub

}

Suscripcion::~Suscripcion() {
	// TODO Auto-generated destructor stub
}

void Suscripcion::setValidez(valideces validez)
{
	this->validez = validez;
}

valideces Suscripcion::getValidez()
{
	return this->validez;
}
