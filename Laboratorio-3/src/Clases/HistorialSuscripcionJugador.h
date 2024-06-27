/*
 * HistorialSuscripcionJugador.h
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#ifndef CLASES_HISTORIALSUSCRIPCIONJUGADOR_H_
#define CLASES_HISTORIALSUSCRIPCIONJUGADOR_H_

#include <vector>

#include <iostream>
using namespace std;

#include "Jugador.h"
#include "Suscripcion.h"
#include "../DataTypes/DtFecha.h"




class HistorialSuscripcionJugador {

enum MetodoPago {Tarjeta, Paypal};


public:
	HistorialSuscripcionJugador();
	HistorialSuscripcionJugador(MetodoPago, DtFecha, int, Jugador*, Suscripcion*);


	void setJugador(Jugador* jugador);
	void setSuscripcion(Suscripcion* suscripcion);

	Jugador* getJugador();
	Suscripcion* getSuscripcion();


	virtual ~HistorialSuscripcionJugador();


private:
	MetodoPago metodoPago;
	DtFecha fecha;
	int costo;

	Jugador* jugador;
	Suscripcion* suscripcion;


};

#endif /* CLASES_HISTORIALSUSCRIPCIONJUGADOR_H_ */
