/*
 * Temporal.h
 *
 *  Created on: 24 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef TEMPORAL_H_
#define TEMPORAL_H_

#include <iostream>
using namespace std;

#include "Suscripcion.h"

class Temporal : public Suscripcion {
private:
	int cuotaMensual;
public:
	Temporal();
	virtual ~Temporal();
};

#endif /* TEMPORAL_H_ */
