/*
 * InterfazControladorUsuario.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef INTERFAZCONTROLADORUSUARIO_H_
#define INTERFAZCONTROLADORUSUARIO_H_



#include <iostream>
using namespace std;

class InterfazControladorUsuario {
public:

	void ingresarDatosUsuarios()=0;
		void ingresarDatosDesarollador(string)=0;
		void ingresarDatosJugador(string)=0;
		void iniciarSesion()=0;
		void confirmarAlta()=0;
		void cancelarAlta()=0;
		void ingresarJugadorPartida(string)=0;
		void jugadorSeRetiraDeLaPartida(string)=0;
		void seleccionarJugadoresSeguir()=0;

	InterfazControladorUsuario();
	virtual ~InterfazControladorUsuario();
};

#endif /* INTERFAZCONTROLADORUSUARIO_H_ */
