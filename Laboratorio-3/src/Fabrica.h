/*
 * Fabrica.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef FABRICA_H_
#define FABRICA_H_

#include <iostream>

#include"Controladores/ControladorUsuario.h"
#include "Controladores/ControladorVideojuego.h"
#include "Controladores/ControladorPartida.h"
#include"Controladores/ControladorSuscripcion.h"

using namespace std;


class Fabrica {

private:
	Fabrica();
	virtual ~Fabrica();

	static Fabrica* instancia;

	static ControladorUsuario* instanciaUsuario; 
	static ControladorVideojuego* instanciaVideojuego;
	static ControladorPartida* instanciaPartida;
	static ControladorSuscripcion* instanciaSuscripcion; 


public:
	Fabrica* getInstanciaFabrica();

	ControladorUsuario* getInstanciaUsuario();
	ControladorVideojuego* getInstanciaVideojuego();
	ControladorPartida* getInstanciaPartida();
	ControladorSuscripcion* getInstanciaSuscripcion();



};

#endif /* FABRICA_H_ */

