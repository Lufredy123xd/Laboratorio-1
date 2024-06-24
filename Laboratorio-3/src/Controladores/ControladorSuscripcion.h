/*
 * ControladorSuscripcion.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORSuscripcion_H_
#define CONTROLADORSuscripcion_H_
#include <iostream>
using namespace std;
#include "../Interfaces/InterfazSuscripcion.h"

class ControladorSuscripcion : public InterfazSuscripcion{
private:
	ControladorSuscripcion();
	virtual ~ControladorSuscripcion();

	static ControladorSuscripcion* instancia;

public:
	static ControladorSuscripcion* getInstanciaControladorSuscripcion();
	void printss();

};

#endif /* CONTROLADORSuscripcion_H_ */
