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

#include "../DataTypes/DtFechaHora.h"


class Comentario {

private:

	DtFechaHora* fechaEnvio;
	DtFechaHora* horaEnvio;
string textoMensaje;

public:
	Comentario();

	DtFechaHora* getFechaEnvio();
	DtFechaHora* getHoraEnvio();
	string getTextoMensaje();

	void setFechaEnvio(DtFechaHora*);
	void setHoraEnvio(DtFechaHora*);
	void setTextoMensaje(string);

	virtual ~Comentario();
};

#endif /* CLASES_COMENTARIO_H_ */
