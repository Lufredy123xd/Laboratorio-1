/*
 * DtJugador.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTJUGADOR_H_
#define SRC_DATATYPES_DTJUGADOR_H_

#include "DtUsuario.h"
#include <string>
using namespace std;

class DtJugador : public DtUsuario {
public:
	DtJugador(string, string);
	virtual ~DtJugador();

	string getNickname();
	string getDescripcion();

private:
	string nickName;
	string descripcion;
};

#endif /* SRC_DATATYPES_DTJUGADOR_H_ */
