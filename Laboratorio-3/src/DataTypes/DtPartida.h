/*
 * DtPartida.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTPARTIDA_H_
#define SRC_DATATYPES_DTPARTIDA_H_

#include "DtFechaHora.h"
#include <iostream>
using namespace std;

class DtPartida {
public:
	DtPartida(int, DtFechaHora*, string);
	virtual ~DtPartida();

	DtFechaHora* getFechaHora();
	string getNombreVideojuego();
	int getID();

private:
	int id;
	string nombreVideojuego;
	DtFechaHora* fechaHora;



};

#endif /* SRC_DATATYPES_DTPARTIDA_H_ */
