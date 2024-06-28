/*
 * DtPartida.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtPartida.h"

DtPartida::DtPartida(int id, DtFechaHora* nFechaHora, string nNombreVideojuego) {
	// TODO Esbozo de constructor generado automáticamente
	this->id = id;
	this->fechaHora = nFechaHora;
	this->nombreVideojuego = nNombreVideojuego;
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
