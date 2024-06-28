/*
 * DtPartidaMultijugador.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTPARTIDAMULTIJUGADOR_H_
#define SRC_DATATYPES_DTPARTIDAMULTIJUGADOR_H_

#include "DtPartida.h"
#include "../Clases/Jugador.h"
#include <vector>
using namespace std;

class DtPartidaMultijugador : public DtPartida {
public:
	DtPartidaMultijugador(bool, vector<Jugador*>);
	virtual ~DtPartidaMultijugador();

	string getNickNameJugadores();
	bool getTransmitidoEnVivo();


private:
	vector<Jugador*> nickNameJugadores;
	bool transmitidoEnVivo;

};

#endif /* SRC_DATATYPES_DTPARTIDAMULTIJUGADOR_H_ */
