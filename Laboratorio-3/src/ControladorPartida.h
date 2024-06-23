/*
 * ControladorPartida.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef CONTROLADORPARTIDA_H_
#define CONTROLADORPARTIDA_H_

#include <iostream>
#include "Partida.h"
#include <vector>
using namespace std;

class ControladorPartida {
private:
	static ControladorPartida* instanciaPartida;
	vector<Partida*> Partidas;
	ControladorPartida();
public:
	static ControladorPartida* getInstanciaPartida();
	virtual ~ControladorPartida();
};

#endif /* CONTROLADORPARTIDA_H_ */
