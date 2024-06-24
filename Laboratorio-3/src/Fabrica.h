/*
 * Fabrica.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef FABRICA_H_
#define FABRICA_H_

#include <iostream>

#include"ControladorUsuario.h"
#include "ControladorVideojuego.h"
#include "ControladorPartida.h"

using namespace std;


class Fabrica {

private:
	Fabrica();
	virtual ~Fabrica();

	static Fabrica* instancia;

	static ControladorUsuario* instanciaUsuario; 
	static ControladorVideojuego* instanciaVideojuego;
	static ControladorPartida* instanciaPartida;


public:
	Fabrica* getInstanciaFabrica();

	ControladorUsuario* getInstanciaUsuario();
	ControladorVideojuego* getInstanciaVideojuego();
	ControladorPartida* getInstanciaPartida();



};

#endif /* FABRICA_H_ */

