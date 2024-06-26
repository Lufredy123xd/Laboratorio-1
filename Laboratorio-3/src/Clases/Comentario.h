/*
 * Comentario.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_COMENTARIO_H_
#define CLASES_COMENTARIO_H_

#include <iostream>
using namespace std;

#include "../DataTypes/DtFecha.h"


class Comentario {

private:

DtFecha* fechaEnvio;
DtFecha* horaEnvio;
string textoMensaje;

public:
	Comentario();

	DtFecha* getFechaEnvio();
	DtFecha* getHoraEnvio();
	string getTextoMensaje();

	void setFechaEnvio(DtFecha*);
	void setHoraEnvio(DtFecha*);
	void setTextoMensaje(string);

	virtual ~Comentario();
};

#endif /* CLASES_COMENTARIO_H_ */
