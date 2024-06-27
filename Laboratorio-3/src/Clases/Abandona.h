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

public:
	Abandona();

	vector<Multijugador*> vectorMultijugador;

	int gethoraAbandono();
	void setHoraAbandono(int);

	virtual ~Abandona();

private:
	int horaAbandono;

};

#endif /* CLASES_ABANDONA_H_ */
