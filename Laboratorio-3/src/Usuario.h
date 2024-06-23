/*
 * Usuario.h
 *
 *  Created on: 23 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
using namespace std;


class Usuario {
private:
	string correo;
	string email;

public:
	Usuario();
	virtual ~Usuario();
};

#endif /* USUARIO_H_ */
