/*
 * ControladorUsuario.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORUSUARIO_H_
#define CONTROLADORUSUARIO_H_
#include <iostream>
using namespace std;
#include <vector>
#include "../Interfaces/InterfazUsuario.h"
#include  "../Clases/Usuario.h"


class ControladorUsuario : public InterfazUsuario{
private:
	ControladorUsuario();
	virtual ~ControladorUsuario();

	static ControladorUsuario* instancia;

public:
	static ControladorUsuario* getInstanciaControladorUsuario();
	void printss();
	vector<Usuario*> usuarios;
};

#endif /* CONTROLADORUSUARIO_H_ */
