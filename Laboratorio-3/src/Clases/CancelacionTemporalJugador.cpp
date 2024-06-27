/*
 * Cancelacion.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#include "CancelacionTemporalJugador.h"

CancelacionTemporalJugador::CancelacionTemporalJugador() {
	// TODO Auto-generated constructor stub

}

CancelacionTemporalJugador::~CancelacionTemporalJugador() {
	// TODO Auto-generated destructor stub
}

void CancelacionTemporalJugador::setEstadoCancelacion(bool nuevoEstadoCancelacion) {
	this->cancelado = nuevoEstadoCancelacion;
}

bool CancelacionTemporalJugador::getEstadoCancelacion() {
	return this->cancelado;
}



