/*
 * Partida.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_PARTIDA_H_
#define CLASES_PARTIDA_H_

#include <iostream>
using namespace std;

//#include "Jugador.h"


class Partida {

private:
	//Jugador* jugadorUno;
	int totalHorasJugadas;
public:
	Partida();
	Partida(int);
	//Jugador* getJugadorUno();
	int getTotalHorasJugadas();

	//void setJugadorUno(Jugador*);
	void setTotalHorasJugadas(int);
	virtual ~Partida();
};

#endif /* CLASES_PARTIDA_H_ */
