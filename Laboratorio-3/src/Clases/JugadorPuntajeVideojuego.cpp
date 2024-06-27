/*
 * JugadorPuntajeVideojuego.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Valentino Vignolo
 */

#include "JugadorPuntajeVideojuego.h"

JugadorPuntajeVideojuego::JugadorPuntajeVideojuego() {
	// TODO Esbozo de constructor generado automáticamente
 this->puntaje = 0;
 this->pJugador = nullptr;
 this->pVideojuego = nullptr;
}

JugadorPuntajeVideojuego::~JugadorPuntajeVideojuego() {
	// TODO Esbozo de destructor generado automáticamente
}

JugadorPuntajeVideojuego::JugadorPuntajeVideojuego(int puntaje, Jugador* pJugador, Videojuego* pVideojuego){
	this->puntaje = puntaje;
	this->pJugador = pJugador;
	this->pVideojuego = pVideojuego;
}

int JugadorPuntajeVideojuego::getPuntaje(){
	return this->puntaje;
}

Jugador* JugadorPuntajeVideojuego::getPJugador(){
	return this->pJugador;
}
Videojuego* JugadorPuntajeVideojuego::getPVideojuego(){
	return this->pVideojuego;
}

//setters
void JugadorPuntajeVideojuego::setPuntaje(int nuevoPuntaje){
	this->puntaje = nuevoPuntaje;
}

void JugadorPuntajeVideojuego::setPJugador(Jugador* nuevoPJugador){
	this->pJugador = nuevoPJugador;
}
void JugadorPuntajeVideojuego::setPVideojuego(Videojuego* nuevoPVideojuego){
	this->pVideojuego = nuevoPVideojuego;
}

