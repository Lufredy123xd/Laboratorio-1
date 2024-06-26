/*
 * Categoria.h
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#ifndef CLASES_CATEGORIA_H_
#define CLASES_CATEGORIA_H_

#include <iostream>
#include "../Enums/TipoCategoria.h"
using namespace std;

class Categoria {
private:

	string nombre;
	string descripcion;
	TipoCategoria* tipoCategoria;

public:
	Categoria();

	string getNombre();
	string getDescripcion();
	TipoCategoria* getTipoCategoria();

	void setNombre(string);
	void setDescripcion(string);
	void setTipoCategoria(TipoCategoria*);
	virtual ~Categoria();
};

#endif /* CLASES_CATEGORIA_H_ */
