/*
 * DtHistorialPartidas.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtHistorialPartidas.h"

DtHistorialPartidas::DtHistorialPartidas(int id, DtFechaHora* fechaHora) {
	// TODO Esbozo de constructor generado automáticamente
	this->fechaHora = fechaHora;
	this->id = id;

}

DtHistorialPartidas::~DtHistorialPartidas() {
	// TODO Esbozo de destructor generado automáticamente
}

DtFechaHora* DtHistorialPartidas::getFechaHora()
{
	return this->fechaHora;
}

int DtHistorialPartidas::getID()
{
	return this->id;
}
