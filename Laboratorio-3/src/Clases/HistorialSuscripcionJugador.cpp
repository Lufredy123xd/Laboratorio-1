/*
 * HistorialSuscripcionJugador.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#include "HistorialSuscripcionJugador.h"

HistorialSuscripcionJugador::HistorialSuscripcionJugador() {
		this->fecha = NULL;
		this->costo = 0;
		this->suscripcion = NULL;
		this->jugador = NULL;
}

HistorialSuscripcionJugador::HistorialSuscripcionJugador(MetodoPago nuevoMetodoPago, DtFecha* nuevaFecha, int nuevoCosto, Jugador* nuevoJugador, Suscripcion* nuevaSuscripcion) {
	this->metodoPago = nuevoMetodoPago;
	this->fecha = nuevaFecha;
	this->costo = nuevoCosto;
	this->suscripcion = nuevaSuscripcion;
	this->jugador = nuevoJugador;

}

HistorialSuscripcionJugador::~HistorialSuscripcionJugador() {
	// TODO Auto-generated destructor stub
}


Jugador* HistorialSuscripcionJugador::getJugador(){
	return this->jugador;
}

Suscripcion* HistorialSuscripcionJugador::getSuscripcion()
{
	return this->suscripcion;
}
