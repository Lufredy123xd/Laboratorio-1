/*
 * DtComentario.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtComentario.h"

DtComentario::DtComentario(int NidComentario,DtFechaHora* NfechaEnvio,string NnicknameJugador,string Ntexto) {
	// TODO Esbozo de constructor generado automáticamente

	this->idComentario = NidComentario;
	this->fechaEnvio = NfechaEnvio;
	this->nicknameJugador = NnicknameJugador;
	this->texto = Ntexto;
}

DtFechaHora* DtComentario::getFechaEnvio()  {
	return this->fechaEnvio;
}

int DtComentario::getIdComentario()  {
	return this->idComentario;
}

string DtComentario::getNicknameJugador()  {
	return this->nicknameJugador;
}

string DtComentario::getTexto()  {
	return this->texto;
}

DtComentario::~DtComentario() {
	// TODO Esbozo de destructor generado automáticamente
}

