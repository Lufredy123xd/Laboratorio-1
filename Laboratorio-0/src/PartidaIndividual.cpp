/*
 * PartidaIndividual.cpp
 *
 *  Created on: 1 abr. 2024
 *      Author: n1c0l
 */

#include "PartidaIndividual.h"

PartidaIndividual::PartidaIndividual() {
	// TODO Auto-generated constructor stub
}

PartidaIndividual::PartidaIndividual(bool continuarPartida,DtFechaHora *nuevaFecha, float nuevaDuracion):Partida(nuevaFecha, nuevaDuracion) {
	// TODO Auto-generated constructor stub
	this->continuaPartidaAnterior = continuarPartida;
}


PartidaIndividual::~PartidaIndividual() {
	// TODO Auto-generated destructor stub
}


bool PartidaIndividual::getContinuaPartidaAnterior(){
	return this->continuaPartidaAnterior;
}
void PartidaIndividual::setContinuarPartidaAnterior(bool continuarPartida){
	this->continuaPartidaAnterior = continuarPartida;
}
