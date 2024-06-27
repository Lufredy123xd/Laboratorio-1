/*
 * Videojuego.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "Videojuego.h"

Videojuego::Videojuego() {
	// TODO Esbozo de constructor generado automáticamente
	this->nombre = "sin nombre";
	this->descripcion = "";
	this->promedioPuntos = 0;
}
Videojuego::Videojuego(string nombre, string descripcion, float promedioPuntos){
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->promedioPuntos = promedioPuntos;
}
Videojuego::~Videojuego() {
	// TODO Esbozo de destructor generado automáticamente
}

string Videojuego::getDescripcion() {
	return this->descripcion;
}
string Videojuego::getNombre(){
	return this->nombre;
}
float Videojuego::getPromedioPuntos() {
	return this->promedioPuntos;
}

void Videojuego::setDescripcion(string nuevaDescripcion) {
	this->descripcion = nuevaDescripcion;
}
void Videojuego::setNombre(string nuevoNombre) {
	this->nombre = nuevoNombre;
}
void Videojuego::setPromedioPuntos(float promedioPuntos) {
	this->promedioPuntos = promedioPuntos;
}
