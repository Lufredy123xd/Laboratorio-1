/*
 * Multijugador.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Multijugador.h"

Multijugador::Multijugador() {
	// TODO Auto-generated constructor stub

}

Multijugador::~Multijugador() {
	// TODO Auto-generated destructor stub
}

int Multijugador::getCantJugadores()
{
	return this->cantJugadores;
}

bool Multijugador::getTrasmitidaVivo()
{
	return this->trasmitidaVivo;
}

int Multijugador::getDuracionTotal()
{
	return this->duracionTotal;
}

void Multijugador::setCantJugadores(int cantJugadores)
{
	this->cantJugadores=cantJugadores;
}

void Multijugador::setTrasmitidaVivo(bool trasmitidaVivo)
{
	this->trasmitidaVivo=trasmitidaVivo;
}

void Multijugador::setDuracionTotal(int duracionTotal)
{
	this->duracionTotal=duracionTotal;
}

