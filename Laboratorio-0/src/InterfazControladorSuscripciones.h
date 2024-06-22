/*
 * InterfazControladorSuscripciones.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef INTERFAZCONTROLADORSUSCRIPCIONES_H_
#define INTERFAZCONTROLADORSUSCRIPCIONES_H_

#include <iostream>
using namespace std;

class InterfazControladorSuscripciones {
public:

	void obtenerTipoSuscripcionPorVideojuego()=0;
	void terminarOperacion()=0;
	void cancelarSuscripcion()=0;
	void seleccionarTipoSuscripcion()=0;
	void confirmarCompra()=0;
	void cancelarCompra()=0;

	InterfazControladorSuscripciones();
	virtual ~InterfazControladorSuscripciones();
};

#endif /* INTERFAZCONTROLADORSUSCRIPCIONES_H_ */
