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


class Partida {

private:
	int totalHorasJugadas;

public:

	Partida();

	int getTotalHorasJugadas();

	void setTotalHorasJugadas(int);
	virtual ~Partida();

};

#endif /* CLASES_PARTIDA_H_ */
