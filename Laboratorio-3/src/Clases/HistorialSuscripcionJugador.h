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
#include "../DataTypes/DtFechaHora.h"



enum MetodoPago {Tarjeta, Paypal};
class HistorialSuscripcionJugador {


public:
	HistorialSuscripcionJugador();
	HistorialSuscripcionJugador(MetodoPago, DtFechaHora*, int, Jugador*, Suscripcion*);


	void setJugador(Jugador* jugador);
	void setSuscripcion(Suscripcion* suscripcion);

	Jugador* getJugador();
	Suscripcion* getSuscripcion();


	virtual ~HistorialSuscripcionJugador();


private:
	MetodoPago metodoPago;
	DtFechaHora* fecha;
	int costo;
	Jugador* jugador;
	Suscripcion* suscripcion;


};

#endif /* CLASES_HISTORIALSUSCRIPCIONJUGADOR_H_ */
