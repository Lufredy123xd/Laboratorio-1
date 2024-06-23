/*
 * Desarrollador.h
 *
 *  Created on: 23 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef DESARROLLADOR_H_
#define DESARROLLADOR_H_

#include <iostream>
using namespace std;

#include"Usuario.h"

class Desarrollador: public Usuario {
private:

public:
	Desarrollador();
	virtual ~Desarrollador();
};

#endif /* DESARROLLADOR_H_ */
