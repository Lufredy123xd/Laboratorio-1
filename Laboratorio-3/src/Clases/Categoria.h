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

	enum TipoCategoria {plataforma, genero, otros};

public:
	Categoria();
	Categoria(string, string, TipoCategoria);

	string getNombre();
	string getDescripcion();

	void setNombre(string);
	void setDescripcion(string);
	void setTipoCategoria(TipoCategoria);
	virtual ~Categoria();


private:
	string nombre;
	string descripcion;
	TipoCategoria tipoCategoria;
};

#endif /* CLASES_CATEGORIA_H_ */
