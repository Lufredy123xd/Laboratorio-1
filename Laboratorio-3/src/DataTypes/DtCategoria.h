/*
 * DtCategoria.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTCATEGORIA_H_
#define SRC_DATATYPES_DTCATEGORIA_H_

#include <string>
using namespace std;
enum tipoCategorias {plataforma, genero, otros};

class DtCategoria {
private:
	string nombre;
	string descripcion;
	tipoCategorias tipoCategoria;
public:
	DtCategoria();
	virtual ~DtCategoria();

	string getNombre();
	string getDescripcion();
	tipoCategorias getTipoCategoria();
};

#endif /* SRC_DATATYPES_DTCATEGORIA_H_ */
