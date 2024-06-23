//============================================================================
// Name        : Practica_Singletone.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fabrica.h"
using namespace std;

int main() {

	Fabrica* instancia = nullptr;

	instancia->getInstanciaFabrica();

	instancia->printEnPantalla();


	return 0;
}
