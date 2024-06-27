/*
 * DtPartidaIndividual.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTPARTIDAINDIVIDUAL_H_
#define SRC_DATATYPES_DTPARTIDAINDIVIDUAL_H_

#include "DtPartida.h"

class DtPartidaIndividual : public DtPartida {
public:
	DtPartidaIndividual(bool);
	virtual ~DtPartidaIndividual();

	bool getContinuacionAnterior();

private:
	bool continuacionAnterior;
};

#endif /* SRC_DATATYPES_DTPARTIDAINDIVIDUAL_H_ */
