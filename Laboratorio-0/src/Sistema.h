#ifndef SISTEMA_H_
#define SISTEMA_H_

#include <vector>

#include "Jugador.h"
#include "Videojuego.h"
#include "Partida.h"

class Sistema {
public:
	Sistema();


	virtual ~Sistema();

	//Firmas de operaciones
	vector<Jugador*> obtenerJugadores(int);
	vector<Videojuego*> obtenerVideojuegos(int);
	vector<Partida*> obtenerPartidas(string , int );

	//Variables globales
	vector<Jugador*> jugadores;
	vector<Videojuego*> videojuegos;
	vector<Partida*> partidas;


	void iniciarPartida(string , string , Partida* );
	void agregarJugador();
	void agregarVideojuego();

	void agregarPartida();
	void agregarPartidaIndividual();
	void agregarPartidaMultijugador();

	void mostrarJugadores();
	void mostrarVideojuegos();
	void mostrarPartida(vector<Partida*>);

};

#endif /* SISTEMA_H_ */
