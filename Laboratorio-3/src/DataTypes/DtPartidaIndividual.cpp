/*
 * DtPartidaIndividual.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtPartidaIndividual.h"

DtPartidaIndividual::DtPartidaIndividual(bool continuarPartidaAnterior) {
	// TODO Esbozo de constructor generado automáticamente
	this->continuacionAnterior = continuarPartidaAnterior;
}

DtPartidaIndividual::~DtPartidaIndividual() {
	// TODO Esbozo de destructor generado automáticamente
}

bool DtPartidaIndividual::getContinuacionAnterior()
{
	return this->continuacionAnterior;
}
