/*
 * DtPartida.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtPartida.h"

DtPartida::DtPartida(int id, DtFechaHora* fechaHora, string nombreVideojuego) {
	// TODO Esbozo de constructor generado automáticamente
	this->id = id;
	this->fechaHora = fechaHora;
	this->nombreVideojuego = nombreVideojuego;
}

DtPartida::~DtPartida() {
	// TODO Esbozo de destructor generado automáticamente
}

string DtPartida::getNombreVideojuego()
{
	return this->nombreVideojuego;
}

DtFechaHora* DtPartida::getFechaHora()
{
	return this->fechaHora;
}

int DtPartida::getID()
{
	return this->id;
}
