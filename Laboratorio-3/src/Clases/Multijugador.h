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

class Multijugador : public Partida{

private:

vector<Comentario*> vectorComentario;

int cantJugadores;
bool trasmitidaVivo;
int duracionTotal;

public:
	Multijugador();

	vector<Comentario*> getvectorComentario();
	void setVectorComentario(vector<Comentario*>);

	int getCantJugadores();
	bool getTrasmitidaVivo();
	int getDuracionTotal();

	void setCantJugadores(int);
	void setTrasmitidaVivo(bool);
	void setDuracionTotal(int);

	virtual ~Multijugador();
};

#endif /* CLASES_MULTIJUGADOR_H_ */
