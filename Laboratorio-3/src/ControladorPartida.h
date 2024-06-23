/*
 * ControladorPartida.h
 *
 *  Created on: 23 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORPARTIDA_H_
#define CONTROLADORPARTIDA_H_

#include "InterfazPartida.h"

class ControladorPartida : public InterfazPartida {

public:
	ControladorPartida();
	virtual ~ControladorPartida();

	static ControladorPartida* getInstanciaControladorPartida();

private:
	static ControladorPartida* instancia;
};

#endif /* CONTROLADORPARTIDA_H_ */
