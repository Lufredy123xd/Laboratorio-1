/*
 * ControladorPartida.h
 *
 *  Created on: 23 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORPARTIDA_H_
#define CONTROLADORPARTIDA_H_

#include <vector>
#include "../Clases/Partida.h"
#include "../Interfaces/InterfazPartida.h"

class ControladorPartida : public InterfazPartida {
private:
	static ControladorPartida* instancia;
	ControladorPartida();
	virtual ~ControladorPartida();
public:
	static ControladorPartida* getInstanciaControladorPartida();
	void holaPartida();
	vector<Partida*> partidas;
};

#endif /* CONTROLADORPARTIDA_H_ */
