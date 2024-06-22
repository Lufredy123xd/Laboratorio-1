#ifndef PARTIDAMULTIJUGADOR_H_
#define PARTIDAMULTIJUGADOR_H_

#include "Partida.h"
#include <vector>

class PartidaMultijugador : public Partida {
public:
	PartidaMultijugador();

	PartidaMultijugador(bool, DtFechaHora* fecha, float );



	bool getTransmitidaEnVivo();
	void setTransmitidaEnVivo(bool);


	vector<Jugador*> getmultiJugadores();
	void setmultiJugadores(vector<Jugador*>);


	virtual ~PartidaMultijugador();

private:
	vector<Jugador*> multiJugadores;
	bool transmitidaEnVivo;
};

#endif /* PARTIDAMULTIJUGADOR_H_ */
