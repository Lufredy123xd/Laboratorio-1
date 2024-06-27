/*
 * Individual.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_INDIVIDUAL_H_
#define CLASES_INDIVIDUAL_H_

#include "Partida.h"

class Individual : public Partida {
private:
	bool partidaNueva;
	bool partidaAnterior;

public:
	Individual();

	bool getPartidaNueva();
	bool getPartidaAnterior();

	void setPartidaNueva(bool);
	void setPartidaAnterior(bool);

	virtual ~Individual();
};

#endif /* CLASES_INDIVIDUAL_H_ */
