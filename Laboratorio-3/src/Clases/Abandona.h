/*
 * Abandona.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_ABANDONA_H_
#define CLASES_ABANDONA_H_

#include "Multijugador.h"
#include <vector>

class Abandona {
private:
	vector<Multijugador*> vectorMultijugador;
	int horaAbandono;

public:

	Abandona();

	vector<Multijugador*> getVectorMultijugador();
	void setVectorMultijugador(vector<Multijugador*>);

	int gethoraAbandono();
	void setHoraAbandono(int);

	virtual ~Abandona();
};

#endif /* CLASES_ABANDONA_H_ */
