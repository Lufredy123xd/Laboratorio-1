/*
 * DtComentario.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTCOMENTARIO_H_
#define SRC_DATATYPES_DTCOMENTARIO_H_

#include <string>
using namespace std;
#include "DtFechaHora.h"

class DtComentario {
private:
	int idComentario;
	DtFechaHora*	fechaEnvio;
	string nicknameJugador; 
	string texto;
public:
	DtComentario(int, DtFechaHora*, string, string);
	virtual ~DtComentario();
	
	 DtFechaHora* getFechaEnvio();
	 int getIdComentario();
	 string getNicknameJugador();
	 string getTexto();
};

#endif /* SRC_DATATYPES_DTCOMENTARIO_H_ */
