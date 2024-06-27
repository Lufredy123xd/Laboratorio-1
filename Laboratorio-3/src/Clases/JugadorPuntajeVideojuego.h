/*
 * JugadorPuntajeVideojuego.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef CLASES_JUGADORPUNTAJEVIDEOJUEGO_H_
#define CLASES_JUGADORPUNTAJEVIDEOJUEGO_H_

#include <iostream>
using namespace std;

#include "Videojuego.h"
#include "Jugador.h"

class JugadorPuntajeVideojuego {
private:
	int puntaje;
	Jugador* pJugador;
	Videojuego* pVideojuego;
public:
	JugadorPuntajeVideojuego();
	virtual ~JugadorPuntajeVideojuego();
	
	JugadorPuntajeVideojuego(int, Jugador*, Videojuego*);
	//getters
	int getPuntaje();
	Jugador* getPJugador();
	Videojuego* getPVideojuego();

	//setters
	void setPuntaje(int);
	void setPJugador(Jugador*);
	void setPVideojuego(Videojuego*);
	
};

#endif /* CLASES_JUGADORPUNTAJEVIDEOJUEGO_H_ */
