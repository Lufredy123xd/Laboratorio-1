/*
 * Jugador.h
 *
 *  Created on: 23 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
using namespace std;

#include"Usuario.h"
#include "Partida.h"
#include "Abandona.h"
#include <vector>

class Jugador : public Usuario{
private:

	string nickname;
	string descripcion;

public:
	Jugador();
	vector<Jugador*> sigue;
	vector<Partida*> partidasMultijugador;
	vector<Abandona*> partidasMultijugadorAbandonadas;

	virtual ~Jugador();
	string getDescripcion();
	void setDescripcion(string descripcion);
	string getNickname();
	void setNickname(string nickname);
};

#endif /* JUGADOR_H_ */
