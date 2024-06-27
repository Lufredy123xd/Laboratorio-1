//============================================================================
// Name        : Practica_Singletone.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Fabrica.h"

#include"Interfaces/InterfazUsuario.h"
#include"Interfaces/InterfazPartida.h"
#include"Interfaces/InterfazSuscripcion.h"
#include"Interfaces/InterfazVideojuego.h"



int main() {

	Fabrica* fabrica = nullptr;

	fabrica->getInstanciaFabrica();

	InterfazUsuario* interfazUsuario = fabrica->getInstanciaUsuario();

	interfazUsuario->holaUsuario();

	InterfazSuscripcion* interfazSuscripcion = fabrica->getInstanciaSuscripcion();

	interfazSuscripcion->holaSuscripcion();

	InterfazPartida* interfazPartida=fabrica->getInstanciaPartida();

	interfazPartida->holaPartida();

	InterfazVideojuego* interfazVideojuego = fabrica->getInstanciaVideojuego();

	interfazVideojuego->holaVideojuego();



	return 0;
}
