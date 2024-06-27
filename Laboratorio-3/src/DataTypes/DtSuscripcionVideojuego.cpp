/*
 * DtSuscripcionVideojuego.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "DtSuscripcionVideojuego.h"

DtSuscripcionVideojuego::DtSuscripcionVideojuego() {
	// TODO Esbozo de constructor generado automáticamente

}

DtSuscripcionVideojuego::~DtSuscripcionVideojuego() {
	// TODO Esbozo de destructor generado automáticamente
}

validez DtSuscripcionVideojuego::getTipoValidez()
{
    return this->tipoValidez;
}

int DtSuscripcionVideojuego::getCostoSuscripcion()
{
    return this->costoSuscripcion;
}

string DtSuscripcionVideojuego::getNombreVideojuego()
{
    return this->nombreVideojuego;
}
