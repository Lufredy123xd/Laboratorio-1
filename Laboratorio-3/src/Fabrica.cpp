/*
 * Fabrica.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#include "Fabrica.h"

Fabrica* Fabrica::instancia = nullptr;

Fabrica::Fabrica() {
	// TODO Auto-generated constructor stub

}

Fabrica::~Fabrica() {
	// TODO Auto-generated destructor stub
}

Fabrica* Fabrica::getInstancia()
{
	if (instancia == nullptr)
	{
		instancia = new Fabrica();
	}

	return instancia;
}

void Fabrica::printEnPantalla()
{
	cout<<"HODA EU SOU UMA PANTALA";
}

