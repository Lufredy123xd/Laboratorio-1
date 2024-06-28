/*
 * DtCategoria.cpp
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */


#include "DtCategoria.h"

DtCategoria(string nNombre, string nDescripcion,tipoCategorias nTipoCategoria) {
	// TODO Esbozo de constructor generado automáticamente
	this->nombre = nNombre;
	this->descripcion = nDescripcion;
	this->tipoCategoria = nTipoCategoria;
}

DtCategoria::~DtCategoria() {
	// TODO Esbozo de destructor generado automáticamente
}

string DtCategoria::getNombre()
{
    return this->nombre;
}

string DtCategoria::getDescripcion()
{
    return this->descripcion;
}

tipoCategorias DtCategoria::getTipoCategoria()
{
    return this->tipoCategoria;
}
