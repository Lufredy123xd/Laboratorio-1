/*
 * HistorialSuscripcionJugador.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#include "HistorialSuscripcionJugador.h"

HistorialSuscripcionJugador::HistorialSuscripcionJugador() {
	// TODO Auto-generated constructor stub
		this->unMetodoPago = metodoPago::Paypal;
		this->fecha = NULL;
		this->costo = 0;
		this->suscripcion = NULL;
		this->jugador = NULL;
}

HistorialSuscripcionJugador::HistorialSuscripcionJugador(metodoPago nuevoMetodoPago, DtFechaHora* nuevaFecha, int nuevoCosto, Jugador* nuevoJugador, Suscripcion* nuevaSuscripcion) {
	this->unMetodoPago = nuevoMetodoPago;
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

void HistorialSuscripcionJugador::setJugador(Jugador* newJugador){
	this->jugador = newJugador;
}
void HistorialSuscripcionJugador::setSuscripcion(Suscripcion* newSuscripcion){
	this->suscripcion = newSuscripcion;
}

void HistorialSuscripcionJugador::setMetodoPago(metodoPago newMetodoPago){
	this->unMetodoPago = newMetodoPago;
}
metodoPago HistorialSuscripcionJugador::getMetodoPago(){
	return this->unMetodoPago;
}
