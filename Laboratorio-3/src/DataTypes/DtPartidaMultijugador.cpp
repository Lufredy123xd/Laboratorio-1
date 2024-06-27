/*
 * DtPartidaMultijugador.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(bool enVivo, string nickNames[]) {
	// TODO Esbozo de constructor generado automáticamente
	this->nickNameJugadores = nickNames;
	this->transmitidoEnVivo = enVivo;

}

DtPartidaMultijugador::~DtPartidaMultijugador() {
	// TODO Esbozo de destructor generado automáticamente
}

bool DtPartidaMultijugador::getTransmitidoEnVivo()
{
	return this->transmitidoEnVivo;
}

string DtPartidaMultijugador::getNickNameJugadores()
{
	return
}
