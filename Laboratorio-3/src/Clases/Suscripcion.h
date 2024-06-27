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

enum valideces {
		Mensual, Trimestral, Anual, Ilimitado};
class Suscripcion {



public:
	Suscripcion();
	virtual ~Suscripcion();

	valideces getValidez();
	void setValidez(valideces);

private:
	valideces validez;
};

#endif /* CLASES_SUSCRIPCION_H_ */
