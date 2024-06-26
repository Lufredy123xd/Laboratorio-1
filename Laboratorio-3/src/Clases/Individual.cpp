/*
 * Individual.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Individual.h"

Individual::Individual() {
	// TODO Auto-generated constructor stub

}

Individual::~Individual() {
	// TODO Auto-generated destructor stub
}

bool Individual::getPartidaNueva()
{
	return this->partidaNueva;
}

bool Individual::getPartidaAnterior()
{
	return this->partidaAnterior;
}

void Individual::setPartidaNueva(bool partidaNueva)
{
	this->partidaNueva=partidaNueva;
}

void Individual::setPartidaAnterior(bool partidaAnterior)
{
	this->partidaAnterior=partidaAnterior;
}
