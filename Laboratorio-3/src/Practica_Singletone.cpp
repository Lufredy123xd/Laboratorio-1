//============================================================================
// Name        : Practica_Singletone.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fabrica.h"
#include"InterfazUsuario.h"

using namespace std;

int main() {

	Fabrica* fabrica = nullptr;

	fabrica->getInstanciaFabrica();

	InterfazUsuario* InterfazUser = fabrica->getInstanciaUsuario();

	InterfazUser->printss();


	return 0;
}
