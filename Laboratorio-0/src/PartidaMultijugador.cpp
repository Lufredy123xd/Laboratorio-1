/*
 * PartidaMultijugador.cpp
 *
 *  Created on: 1 abr. 2024
 *      Author: n1c0l
 */

#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador() {
	// TODO Auto-generated constructor stub
}

PartidaMultijugador::PartidaMultijugador(bool transmitir, DtFechaHora* nuevaFecha,float nuevaDuracion):Partida(nuevaFecha,nuevaDuracion) {
	// TODO Auto-generated constructor stub
	this->transmitidaEnVivo = transmitir;

}

PartidaMultijugador::~PartidaMultijugador() {
	// TODO Auto-generated destructor stub
}

vector<Jugador*> PartidaMultijugador::getmultiJugadores()
{
	return this->multiJugadores;
}

void PartidaMultijugador::setmultiJugadores(vector<Jugador*>pjugadores)
{
	this->multiJugadores = pjugadores;
}

bool PartidaMultijugador::getTransmitidaEnVivo(){
	return this->transmitidaEnVivo;
}
void PartidaMultijugador::setTransmitidaEnVivo(bool transmitir){
	this->transmitidaEnVivo = transmitir;
}
