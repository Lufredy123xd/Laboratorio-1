/*
 * ControladorUsuario.h
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#ifndef CONTROLADORUSUARIO_H_
#define CONTROLADORUSUARIO_H_

#include <iostream>
#include <vector>
using namespace std;

class ControladorUsuario {

private:

	static ControladorUsuario* instanciaUsuario;

	ControladorUsuario();
public:

	static ControladorUsuario* getInstanciaUsuario();

	virtual ~ControladorUsuario();
};

#endif /* CONTROLADORUSUARIO_H_ */
