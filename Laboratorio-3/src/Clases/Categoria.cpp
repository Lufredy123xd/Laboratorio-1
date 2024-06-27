/*
 * Categoria.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "Categoria.h"

Categoria::Categoria() {
	// TODO Auto-generated constructor stub

}

Categoria::~Categoria() {
	// TODO Auto-generated destructor stub
}

string Categoria::getNombre()
{
	return this->nombre;
}

string Categoria::getDescripcion()
{
	return this->descripcion;
}

tipoCategoria Categoria::getCategoria()
{
	return this->categoria;
}

void Categoria::setNombre(string nombre)
{
	this->nombre=nombre;
}

void Categoria::setDescripcion(string descripcion)
{
	this->descripcion=descripcion;
}


void Categoria::setCategoria(tipoCategoria newCategoria)
{
	this->categoria=newCategoria;
}
