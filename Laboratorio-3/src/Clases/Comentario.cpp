/*
 * Comentario.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Comentario.h"

Comentario::Comentario() {
	// TODO Auto-generated constructor stub
	this->fechaEnvio = NULL;
	this->horaEnvio = NULL;
	this->textoMensaje = "";
}

Comentario::~Comentario() {
	// TODO Auto-generated destructor stub
}

DtFechaHora* Comentario::getFechaEnvio()
{
	return this->fechaEnvio;
}

DtFechaHora* Comentario::getHoraEnvio()
{
	return this->horaEnvio;
}

string Comentario::getTextoMensaje()
{
	return this->textoMensaje;
}

void Comentario::setFechaEnvio(DtFechaHora* fechaEnvio)
{
	this->fechaEnvio=fechaEnvio;
}

void Comentario::setHoraEnvio(DtFechaHora* horaEnvio)
{
	this->horaEnvio=horaEnvio;
}

void Comentario::setTextoMensaje(string textoMensaje)
{
	this->textoMensaje=textoMensaje;
}
