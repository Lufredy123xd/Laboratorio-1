/*
 * Fabrica.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#include "Fabrica.h"

Fabrica* Fabrica::instanciaFabrica = nullptr;
ControladorUsuario* Fabrica::instanciaUsuario = nullptr;
ControladorPartida* Fabrica::instanciaPartida = nullptr;
ControladorSuscripciones* Fabrica::instanciaSuscripcion = nullptr;
ControladorVideojuego* Fabrica::instanciaVideojuego = nullptr;

Fabrica::Fabrica() {
	// TODO Auto-generated constructor stub

}

Fabrica* Fabrica::getInstanciaFabrica()
{
	if(instanciaFabrica==NULL)
	{
		instanciaFabrica=new Fabrica();
	}else
	{
	return instanciaFabrica;
	}
}


ControladorUsuario* Fabrica::obtenerInstanciaUsuario() {
    if (instanciaUsuario == nullptr) {
        instanciaUsuario = new ControladorUsuario();
    }
    return instanciaUsuario;
}

ControladorPartida* Fabrica::obtenerInstanciaPartida() {
    if (instanciaPartida == nullptr) {
        instanciaPartida = new ControladorPartida();
    }
    return instanciaPartida;
}

ControladorSuscripciones* Fabrica::obtenerInstanciaSuscripcion() {
    if (instanciaSuscripcion== nullptr) {
        instanciaSuscripcion = new ControladorSuscripciones();
    }
    return instanciaSuscripcion;
}

ControladorVideojuego* Fabrica::obtenerInstanciaVideojuego() {
    if (instanciaVideojuego == nullptr) {
        instanciaVideojuego = new ControladorVideojuego();
    }
    return instanciaVideojuego;
}

Fabrica::~Fabrica() {
	// TODO Auto-generated destructor stub
}

