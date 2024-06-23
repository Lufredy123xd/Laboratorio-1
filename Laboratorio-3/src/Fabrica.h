/*
 * Fabrica.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef FABRICA_H_
#define FABRICA_H_


#include "ControladorPartida.h";
#include "ControladorSuscripciones.h";
#include "ControladorUsuario.h";
#include "ControladorVideojuego.h";

#include <iostream>
using namespace std;

class Fabrica {
private:
	static Fabrica* instanciaFabrica;
	Fabrica();


	    static ControladorUsuario* instanciaUsuario;
	    static ControladorPartida* instanciaPartida;
	    static ControladorSuscripciones* instanciaSuscripcion;
	    static ControladorVideojuego* instanciaVideojuego;

public:
	static Fabrica* getInstanciaFabrica();


	    static ControladorUsuario* obtenerInstanciaUsuario();
	    static ControladorPartida* obtenerInstanciaPartida();
	    static ControladorSuscripciones* obtenerInstanciaSuscripcion();
	    static ControladorVideojuego* obtenerInstanciaVideojuego();

	virtual ~Fabrica();
};

#endif /* FABRICA_H_ */
