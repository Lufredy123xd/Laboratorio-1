/*
 * DtJugador.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */


#include "DtJugador.h"

DtJugador::DtJugador(string nick, string descripcion) {
	// TODO Esbozo de constructor generado automáticamente
	this->nickName = nick;
	this->descripcion = descripcion;
}

DtJugador::~DtJugador() {
	// TODO Esbozo de destructor generado automáticamente
}

string DtJugador::getNickname()
{
	return this->nickName;
}

string DtJugador::getDescripcion()
{
	return this->descripcion;
}

