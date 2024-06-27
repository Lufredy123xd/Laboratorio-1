/*
 * Videojuego.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef CLASES_VIDEOJUEGO_H_
#define CLASES_VIDEOJUEGO_H_

#include <iostream>
using namespace std;



class Videojuego {
private:
	string nombre;
	string descripcion;
	float promedioPuntos;

public:
	Videojuego();
	virtual ~Videojuego();
	Videojuego(string,string,float);

	string getDescripcion();
	string getNombre() ;
	float getPromedioPuntos();

	void setNombre(string nombre);
	void setDescripcion(string descripcion);
	void setPromedioPuntos(float promedioPuntos);
};

#endif /* CLASES_VIDEOJUEGO_H_ */
