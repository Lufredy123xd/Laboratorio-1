/*
 * Jugador.cpp
 *
 *  Created on: 1 abr. 2024
 *      Author: n1c0l
 */

#include "Jugador.h"
#include <vector>
using namespace std;

Jugador::Jugador() {
	this->nickName = "Sin nombre";
	this->edad = 0;
	this->contrasenia = "";
}

void Jugador::agregarJuego(string nombre, int edad, string contrasenia) {
	this->nickName = nombre;
	this->edad = edad;
	this->contrasenia = contrasenia;
}

//-.-.-.-.-.-.-.-Getters.-.-.-.-.-.-.-
string Jugador::getnickName() {
	return this->nickName;
}

string Jugador::getContrasenia() {
	return this->contrasenia;
}

int Jugador::getEdad() {
	return this->edad;
}

//.-.-.-.-.-.-.-Setters.-.-.-.-.-.-.-.-
void Jugador::setnickName(string nuevoNombre) {
	this->nickName = nuevoNombre;
}

void Jugador::setContrasenia(string nuevaContrasenia) {
	this->contrasenia = nuevaContrasenia;
}

void Jugador::setEdad(int nuevaEdad) {
	this->edad = nuevaEdad;
}

Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

string Jugador::mostrarJugador() {
	return this->nickName + " " + this->contrasenia + " " + to_string(this->edad);
}
