/*
 * Vitalicia.h
 *
 *  Created on: 26 jun. 2024
 *      Author: n1c0l
 */

#ifndef CLASES_VITALICIA_H_
#define CLASES_VITALICIA_H_

#include "Suscripcion.h"

class Vitalicia : public Suscripcion {

public:
	Vitalicia();
	virtual ~Vitalicia();

	int getPagoUnico();
	void setPagoUnico(int);

private:
	int pagoUnico;
};

#endif /* CLASES_VITALICIA_H_ */
