/*
 * DtDesarrollador.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTDESARROLLADOR_H_
#define SRC_DATATYPES_DTDESARROLLADOR_H_

#include "DtUsuario.h"
#include <string>
using namespace std;

class DtDesarrollador : public DtUsuario{
public:
	DtDesarrollador(string);
	virtual ~DtDesarrollador();

	string getNombreEmpresa();


private:
	string nombreEmpresa;
};

#endif /* SRC_DATATYPES_DTDESARROLLADOR_H_ */
