/*
 * Categoria.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Categoria.h"

Categoria::Categoria() {

}

Categoria::Categoria(string nombre, string descripcion,
		TipoCategoria categoria) {
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->tipoCategoria = tipoCategoria;

}

Categoria::~Categoria() {
	// TODO Auto-generated destructor stub
}

string Categoria::getNombre() {
	return this->nombre;
}

string Categoria::getDescripcion() {
	return this->descripcion;
}

void Categoria::setNombre(string nombre) {
	this->nombre = nombre;
}

void Categoria::setDescripcion(string descripcion) {
	this->descripcion = descripcion;
}

void Categoria::setTipoCategoria(TipoCategoria tipoCategoria) {
	this->tipoCategoria = tipoCategoria;
}
