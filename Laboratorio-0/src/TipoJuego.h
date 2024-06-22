
#ifndef TIPOJUEGO_H_
#define TIPOJUEGO_H_

#include <string>
using namespace::std;

class TipoJuego {

private:
string nombreG;
string descripcion;

public:
	TipoJuego();

	TipoJuego(string,string);

	string getNombreG();
	string getDescripcion();

	virtual ~TipoJuego();
};

#endif /* TIPOJUEGO_H_ */
