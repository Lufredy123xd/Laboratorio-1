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

	InterfazUsuario* InterfazUser = fabrica->getInstanciaUsuario();

	InterfazUser->printss();

	InterfazSuscripcion* InterfazSuscripcion = fabrica->getInstanciaSuscripcion();

	InterfazSuscripcion->printss();


	return 0;
}
