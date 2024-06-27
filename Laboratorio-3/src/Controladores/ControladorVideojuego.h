/*
 * ControladorVideojuego.h
 *
 *  Created on: 23 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORVIDEOJUEGO_H_
#define CONTROLADORVIDEOJUEGO_H_

#include <vector>
#include "../Interfaces/InterfazVideojuego.h"
#include "../Clases/Videojuego.h"

class ControladorVideojuego : public InterfazVideojuego{
private:
	static ControladorVideojuego* instancia;
	ControladorVideojuego();
	virtual ~ControladorVideojuego();
public:
	static ControladorVideojuego* getInstanciaControladorVideojuego();
	vector<Videojuego*> videojuegos;
	
};

#endif /* CONTROLADORVIDEOJUEGO_H_ */
