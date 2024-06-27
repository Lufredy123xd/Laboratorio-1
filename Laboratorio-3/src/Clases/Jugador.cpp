/*
 * Jugador.cpp
 *
 *  Created on: 23 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "Jugador.h"

Jugador::Jugador() {
	// TODO Esbozo de constructor generado automáticamente

}

Jugador::~Jugador() {
	// TODO Esbozo de destructor generado automáticamente
}

string Jugador::getDescripcion() {
	return this->descripcion;
}

void Jugador::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}

string Jugador::getNickname() {
	return this->nickname;
}

void Jugador::setNickname(string nickname) {
	this->nickname = nickname;
}
