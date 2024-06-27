/*
 * Partida.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Partida.h"

Partida::Partida() {
	// TODO Auto-generated constructor stub

}

Partida::Partida(int totalHorasJugadas) {
	this->totalHorasJugadas = totalHorasJugadas;
	//this->jugadorUno = jugadorUno;
}
Partida::~Partida() {
	// TODO Auto-generated destructor stub
}

int Partida::getTotalHorasJugadas()
{
	return this->totalHorasJugadas;
}

void Partida::setTotalHorasJugadas(int totalHorasJugadas)
{
	this->totalHorasJugadas=totalHorasJugadas;
}

//Jugador* Partida::getJugadorUno()
//{
//	return this->jugadorUno;
//}

//void Partida::setJugadorUno(Jugador* newJugador)
//{
//	this->jugadorUno=newJugador;
//}
