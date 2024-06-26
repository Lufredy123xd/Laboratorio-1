/*
 * SuscribeVideojuego.h
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#ifndef CLASES_SUSCRIBEVIDEOJUEGO_H_
#define CLASES_SUSCRIBEVIDEOJUEGO_H_

#include "Suscripcion.h"

class SuscribeVideojuego {

//FALTA AGREGAR EL VIDEOJUEGO

public:
	SuscribeVideojuego();
	virtual ~SuscribeVideojuego();

	void setCostoSuscripcion(int);
	void setSuscripcion(Suscripcion*);

	int getCostoSuscripcion();
	Suscripcion* getSuscripcion();

private:
	int costoSuscripcion;
	Suscripcion* suscripcion;
};

#endif /* CLASES_SUSCRIBEVIDEOJUEGO_H_ */
