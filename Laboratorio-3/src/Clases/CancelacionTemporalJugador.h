/*
 * Cancelacion.h
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#ifndef CLASES_CANCELACIONTEMPORALJUGADOR_H_
#define CLASES_CANCELACIONTEMPORALJUGADOR_H_

#include "Temporal.h"
#include "Jugador.h"
#include <vector>

class CancelacionTemporalJugador {
public:
	CancelacionTemporalJugador();
	virtual ~CancelacionTemporalJugador();

	bool getEstadoCancelacion();
	void setEstadoCancelacion(bool);

	vector<Temporal*> vectorSusTemporal;
	vector<Jugador*> vectorJugadores;

private:

	bool cancelado;
};

#endif /* CLASES_CANCELACIONTEMPORALJUGADOR_H_ */
