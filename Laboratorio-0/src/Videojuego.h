#ifndef VIDEOJUEGO_H_
#define VIDEOJUEGO_H_

#include "TipoJuego.h"

#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"

#include <vector>
#include <string>

using namespace ::std;

class Videojuego {

private:
	string nombre;
	TipoJuego *genero;
	int totalHorasDeJuego=0;

public:

	Videojuego();

	Videojuego(string,int,TipoJuego*);

	int getotalHorasDeJuego();
	void setotalHorasDeJuego(int);

	string getNombre();

	TipoJuego*  getGenero();

	int calcularTotalHorasVideojuego(vector<Partida*>);

	void setNombre(string);
	void agregarVideojuego(string, TipoJuego*);
	virtual ~Videojuego();
};

#endif /* VIDEOJUEGO_H_ */
