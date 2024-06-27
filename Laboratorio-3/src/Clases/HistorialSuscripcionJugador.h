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



enum metodoPago {Tarjeta, Paypal};
class HistorialSuscripcionJugador {


public:
	HistorialSuscripcionJugador();
	HistorialSuscripcionJugador(metodoPago, DtFechaHora*, int, Jugador*, Suscripcion*);


	void setJugador(Jugador* jugador);
	void setSuscripcion(Suscripcion* suscripcion);
	void setMetodoPago(metodoPago);
	metodoPago getMetodoPago();

	Jugador* getJugador();
	Suscripcion* getSuscripcion();


	virtual ~HistorialSuscripcionJugador();


private:
	metodoPago unMetodoPago;
	DtFechaHora* fecha;
	int costo;
	Jugador* jugador;
	Suscripcion* suscripcion;


};

#endif /* CLASES_HISTORIALSUSCRIPCIONJUGADOR_H_ */
