/*
 * Vitalicia.h
 *
 *  Created on: 24 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef VITALICIA_H_
#define VITALICIA_H_
#include <iostream>
using namespace std;

#include"Suscripcion.h"

class Vitalicia : public Suscripcion{
private:
	int pagoUnico;
public:
	Vitalicia();
	virtual ~Vitalicia();
};

#endif /* VITALICIA_H_ */
