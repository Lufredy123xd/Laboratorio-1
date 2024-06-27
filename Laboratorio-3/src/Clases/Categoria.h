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



class Categoria {

enum tipoCategoria {plataforma, genero, otros};
private:

	string nombre;
	string descripcion;
	tipoCategoria tipoCategoria;

public:
	Categoria();

	string getNombre();
	string getDescripcion();
	tipoCategoria getTipoCategoria();

	void setNombre(string);
	void setDescripcion(string);
	void setTipoCategoria(tipoCategoria);
	virtual ~Categoria();
};

#endif /* CLASES_CATEGORIA_H_ */
