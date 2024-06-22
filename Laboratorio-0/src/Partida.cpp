/*
 * Partida.cpp
 *
 *  Created on: 1 abr. 2024
 *      Author: n1c0l
 */

#include "Partida.h"


Partida::Partida() {
	// TODO Auto-generated constructor stub¡
	this->fecha = NULL;
	this->duracion = 0;
	this->videojuego = NULL;
	this->jugador = NULL;
}

Partida::Partida(DtFechaHora *nueva_fecha, float nueva_duracion) {
	// TODO Auto-generated constructor stub¡
	this->fecha = nueva_fecha;
	this->duracion = nueva_duracion;
	this->videojuego = NULL;
	this->jugador = NULL;
}

Partida::~Partida() {
	if (fecha != NULL) {
		delete fecha;
	}
}

DtFechaHora* Partida::getFecha() {
	return this->fecha;
}

void Partida::setFecha(DtFechaHora *nueva_fecha) {
	this->fecha = nueva_fecha;
}

float Partida::getDuracion() {
	return this->duracion;
}

void Partida::setDuracion(float nueva_duracion) {
	this->duracion = nueva_duracion;
}

Videojuego* Partida::getVjuego() {
	return this->videojuego;
}

void Partida::setVjuego(Videojuego *nuevo_videojuego) {
	this->videojuego = nuevo_videojuego;
}

Jugador* Partida::getJugador() {
	return this->jugador;
}

void Partida::setJugador(Jugador *nuevo_jugador) {
	this->jugador = nuevo_jugador;
}

float Partida::darTotalHorasParticipantes()
{
	return this->duracion;
}
