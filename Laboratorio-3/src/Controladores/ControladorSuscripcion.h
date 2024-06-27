/*
 * ControladorSuscripcion.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORSuscripcion_H_
#define CONTROLADORSuscripcion_H_
#include <iostream>
#include "../Clases/Suscripcion.h"
#include "../Interfaces/InterfazSuscripcion.h"
#include "../Clases/HistorialSuscripcionJugador.h"
#include "../Clases/CancelacionTemporalJugador.h"

using namespace std;
#include <vector>

class ControladorSuscripcion: public InterfazSuscripcion {

public:
	static ControladorSuscripcion* getInstanciaControladorSuscripcion();
	void printss();

	vector<Suscripcion*> suscripciones;
	vector<HistorialSuscripcionJugador*> historialSuscripcion;
	vector<CancelacionTemporalJugador*> cancelacionTemporal;


private:
	ControladorSuscripcion();
	virtual ~ControladorSuscripcion();
	static ControladorSuscripcion *instancia;
};

#endif /* CONTROLADORSuscripcion_H_ */
