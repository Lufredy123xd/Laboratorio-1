/*
 * Suscripcion.h
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#ifndef CLASES_SUSCRIPCION_H_
#define CLASES_SUSCRIPCION_H_

#include <iostream>
using namespace std;

class Suscripcion {

	enum Validez {
		Mensual, Trimestral, Anual, Ilimitado
	};

public:
	Suscripcion();
	virtual ~Suscripcion();

	Validez getValidez();
	void setValidez(Validez);

private:
	Validez validez;
};

#endif /* CLASES_SUSCRIPCION_H_ */
