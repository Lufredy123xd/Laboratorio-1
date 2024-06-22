/*
 * InterfazControladorPartida.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef INTERFAZCONTROLADORPARTIDA_H_
#define INTERFAZCONTROLADORPARTIDA_H_

#include <iostream>
using namespace std;

class InterfazControladorPartida {
public:

	void IniciarPartidaSistema()=0;
	void obtenerVideojuegoSuscripto()=0;
	void seleccionarVideojuegoSuscripto(string)=0;
	void obtieneHistorialPartidas()=0;
	void seleccionarPartidaContinuar(int)=0;
	void ingresarJugadorPartida(string)=0;
	void confirmarInicioPartida()=0;
	void cancelarInicioPartida()=0;
	void obtenerPartidasMultijugadorUnidoNoFinalizadas()=0;
	void abandonarPartidaMultijugador(int)=0;
	void obtenerPartidasIniciadasNoFinalizadas()=0;
	void finalizacionPartida(int)=0;
	void obtenerDatosPartida()=0;
	void seleccionarPartidaAComentar(int)=0;
	void obtenerComentariosPartida()=0;
	void seleccionarComentario(int)=0;
	void crearRespuesta(string)=0;
	void enviarComentario()=0;
	void cancelarEnvio()=0;
	void crearComentario(string)=0;
	InterfazControladorPartida();
	virtual ~InterfazControladorPartida();
};

#endif /* INTERFAZCONTROLADORPARTIDA_H_ */
