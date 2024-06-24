/*
 * ControladorVideojuego.h
 *
 *  Created on: 23 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORVIDEOJUEGO_H_
#define CONTROLADORVIDEOJUEGO_H_

#include "InterfazVideojuego.h"

class ControladorVideojuego : public InterfazVideojuego{

public:
	ControladorVideojuego();
	virtual ~ControladorVideojuego();

	static ControladorVideojuego* getInstanciaControladorVideojuego();

private:
	static ControladorVideojuego* instancia;
};

#endif /* CONTROLADORVIDEOJUEGO_H_ */
