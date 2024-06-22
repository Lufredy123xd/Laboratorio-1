#include "TipoJuego.h"
#include <string>
using namespace ::std;

TipoJuego::TipoJuego() {
	// TODO Auto-generated constructor stub

}

string TipoJuego::getNombreG() {
	return this->nombreG;
}

string TipoJuego::getDescripcion() {
	return this->descripcion;
}

TipoJuego::TipoJuego(string Nombre, string Descripcion) {
	this->nombreG = Nombre;
	this->descripcion = Descripcion;
}

TipoJuego::~TipoJuego() {
	// TODO Auto-generated destructor stub
}

