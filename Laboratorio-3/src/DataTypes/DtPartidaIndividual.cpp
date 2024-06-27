/*
 * DtPartidaIndividual.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtPartidaIndividual.h"

DtPartidaIndividual::DtPartidaIndividual(bool continuacionAnterior) {
	// TODO Esbozo de constructor generado automáticamente
	this->continuacionAnterior = continuacionAnterior;
}

DtPartidaIndividual::~DtPartidaIndividual() {
	// TODO Esbozo de destructor generado automáticamente
}

bool DtPartidaIndividual::getContinuacionAnterior()
{
	return this->continuacionAnterior;
}
