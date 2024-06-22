/*
 * ControladorVideojuego.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef CONTROLADORVIDEOJUEGO_H_
#define CONTROLADORVIDEOJUEGO_H_

#include <iostream>
#include <vector>
#include "Videojuego.h";
using namespace std;

class ControladorVideojuego {
private:
	static ControladorVideojuego* instanciaVideojuego;
	vector<Videojuego*> videojuegos;
	ControladorVideojuego();
public:
	static ControladorVideojuego* getInstanciaVideojuego();
	virtual ~ControladorVideojuego();
};

#endif /* CONTROLADORVIDEOJUEGO_H_ */
