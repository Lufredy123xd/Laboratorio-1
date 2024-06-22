#ifndef PARTIDAINDIVIDUAL_H_
#define PARTIDAINDIVIDUAL_H_
#include "Partida.h"

class PartidaIndividual : public Partida {
public:
	PartidaIndividual();

	PartidaIndividual(bool, DtFechaHora* fecha, float Duracion);

	bool getContinuaPartidaAnterior();
	void setContinuarPartidaAnterior(bool);

	virtual ~PartidaIndividual();

private:
	bool continuaPartidaAnterior;

};

#endif /* PARTIDAINDIVIDUAL_H_ */
