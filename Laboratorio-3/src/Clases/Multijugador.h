/*
 * Multijugador.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_MULTIJUGADOR_H_
#define CLASES_MULTIJUGADOR_H_

#include <iostream>
using namespace std;

#include "Comentario.h"
#include "Partida.h"
#include <vector>

class Multijugador: public Partida {

public:
	Multijugador();

	vector<Comentario*> vectorComentario;

	int getCantJugadores();
	bool getTrasmitidaVivo();
	int getDuracionTotal();

	void setCantJugadores(int);
	void setTrasmitidaVivo(bool);
	void setDuracionTotal(int);

	virtual ~Multijugador();

private:
	int cantJugadores;
	bool trasmitidaVivo;
	int duracionTotal;
};

#endif /* CLASES_MULTIJUGADOR_H_ */
