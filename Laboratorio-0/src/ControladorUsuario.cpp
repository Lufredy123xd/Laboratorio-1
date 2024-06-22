/*
 * ControladorUsuario.cpp
 *
 *  Created on: 22 jun. 2024
 *      Author: Windows-User
 */

#include "ControladorUsuario.h"

ControladorUsuario* ControladorUsuario::instanciaUsuario = nullptr;

ControladorUsuario::ControladorUsuario() {
	// TODO Auto-generated constructor stub

}


ControladorUsuario* ControladorUsuario::getInstanciaUsuario()
{
	if (instanciaUsuario==NULL)
		{
			instanciaUsuario=new ControladorUsuario();
		}else
		{
			return instanciaUsuario;
		}
}

ControladorUsuario::~ControladorUsuario() {
	// TODO Auto-generated destructor stub
}

