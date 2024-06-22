/*
 * Jugador.h
 *
 *  Created on: 1 abr. 2024
 *      Author: n1c0l
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <string>
#include <vector>
using namespace std;

class Jugador {

public:
	Jugador();

	string getnickName();
	string getContrasenia();
	int getEdad();

	void setnickName(string);
	void setContrasenia(string);
	void setEdad(int);

	//Operaciones
	void agregarJuego(string, int, string);

	string mostrarJugador();


	virtual ~Jugador();

private:
	string nickName;
	string contrasenia;
	int edad;

};

#endif /* JUGADOR_H_ */
