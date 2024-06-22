/*
 * InterfazControladorVideojuego.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef INTERFAZCONTROLADORVIDEOJUEGO_H_
#define INTERFAZCONTROLADORVIDEOJUEGO_H_

#include <iostream>
using namespace std;


class InterfazControladorVideojuego {
public:

	void agregarVideojuegos()=0;
	void confirmarPublicacion()=0;
	void cancelarPublicacion()=0;
	void obtenerVideojuegoSistema()=0;
	void seleccionarVideojuegoSistema(string)=0;
	void asignarPuntajeVideojuego(int)=0;
	void obtenerNombreDeVideojuegos()=0;
	void seleccionarVideojuegoEliminar(string)=0;
	void eliminarVideojuego()=0;
	void cancelarEliminacion()=0;
	void obtenerCategoria(string)=0;
	void ingresarDatosNuevaCategoria()=0;
	void obtenerCategoria()=0;
	void confirmarAltaCategoria()=0;

	InterfazControladorVideojuego();
	virtual ~InterfazControladorVideojuego();
};

#endif /* INTERFAZCONTROLADORVIDEOJUEGO_H_ */
