/*
 * Partida.h
 *
 *  Created on: 1 abr. 2024
 *      Author: n1c0l
 */

#ifndef PARTIDA_H_
#define PARTIDA_H_



#include "DtFechaHora.h"

#include "Jugador.h"
class Videojuego; // Declaración adelantada

class Partida {
public:
	Partida();
	Partida(DtFechaHora*, float);


	virtual ~Partida();


	DtFechaHora* getFecha();
	void setFecha(DtFechaHora*);

	float getDuracion();
	void setDuracion(float);

	Videojuego* getVjuego();
	void setVjuego(Videojuego* nuevo_videojuego);

	Jugador* getJugador();
	void setJugador(Jugador* nuevo_jugador);

	float darTotalHorasParticipantes();


private:
	DtFechaHora *fecha;
	float duracion;
	Videojuego* videojuego;
	Jugador* jugador;
};

#endif /* PARTIDA_H_ */
