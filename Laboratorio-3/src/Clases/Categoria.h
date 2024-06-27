/*
 * Categoria.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_CATEGORIA_H_
#define CLASES_CATEGORIA_H_

#include <iostream>
using namespace std;

enum tipoCategoria {plataforma, genero, otros};

class Categoria {


private:

	string nombre;
	string descripcion;
	tipoCategoria categoria;

public:
	Categoria();

	string getNombre();
	string getDescripcion();
	tipoCategoria getCategoria();

	void setNombre(string);
	void setDescripcion(string);
	void setCategoria(tipoCategoria);
	virtual ~Categoria();
};

#endif /* CLASES_CATEGORIA_H_ */
