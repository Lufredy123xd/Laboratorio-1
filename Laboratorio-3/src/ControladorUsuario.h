/*
 * ControladorUsuario.h
 *
 *  Created on: 22 jun. 2024
 *      Author: n1c0l
 */

#ifndef CONTROLADORUSUARIO_H_
#define CONTROLADORUSUARIO_H_

class ControladorUsuario {
private:
	ControladorUsuario();
	virtual ~ControladorUsuario();

	static ControladorUsuario* instancia;

public:
	static ControladorUsuario* getInstanciaControladorUsuario();

};

#endif /* CONTROLADORUSUARIO_H_ */
