/*
 * DtPartidaMultijugador.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTPARTIDAMULTIJUGADOR_H_
#define SRC_DATATYPES_DTPARTIDAMULTIJUGADOR_H_

#include "DtPartida.h"

class DtPartidaMultijugador : public DtPartida {
public:
	DtPartidaMultijugador(bool, string[]);
	virtual ~DtPartidaMultijugador();

	string getNickNameJugadores();
	bool getTransmitidoEnVivo();


private:
	string nickNameJugadores[];
	bool transmitidoEnVivo;

};

#endif /* SRC_DATATYPES_DTPARTIDAMULTIJUGADOR_H_ */
