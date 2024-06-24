/*
 * Suscripcion.h
 *
 *  Created on: 24 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SUSCRIPCION_H_
#define SUSCRIPCION_H_

#include <iostream>
using namespace std;

class Suscripcion {

enum validez{mensual, trimestre, anual, ilimitado};

private:
	validez tipoValidez ;
public:
	Suscripcion();
	virtual ~Suscripcion();
};

#endif /* SUSCRIPCION_H_ */
