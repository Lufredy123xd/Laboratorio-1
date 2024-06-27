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
	int horaAbandono;

public:

	Abandona();

	int gethoraAbandono();

	void setHoraAbandono(int);

	vector<Multijugador*> vectorMultijugador;

	virtual ~Abandona();
};

#endif /* CLASES_ABANDONA_H_ */
