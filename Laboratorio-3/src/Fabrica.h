/*
 * Fabrica.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef FABRICA_H_
#define FABRICA_H_

#include <iostream>
using namespace std;

class Fabrica {

private:
	Fabrica();
	virtual ~Fabrica();
	static Fabrica* instancia;


public:
	Fabrica* getInstancia();

	void printEnPantalla();


};

#endif /* FABRICA_H_ */

