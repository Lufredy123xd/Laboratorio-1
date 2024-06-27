/*
 * Abandona.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Abandona.h"

Abandona::Abandona() {
	// TODO Auto-generated constructor stub
	this->horaAbandono = 0;
}

Abandona::~Abandona() {
	// TODO Auto-generated destructor stub
}

int Abandona::gethoraAbandono()
{
	return this->horaAbandono;
}

void Abandona::setHoraAbandono(int horaAbandono)
{
	this->horaAbandono=horaAbandono;
}

