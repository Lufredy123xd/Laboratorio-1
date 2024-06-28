#ifndef SRC_DATATYPES_DTDATOSMULTIJUGADOR_H_
#define SRC_DATATYPES_DTDATOSMULTIJUGADOR_H_

#include <string>
#include <vector>
#include "DtFechaHora.h"
using namespace std;

class DtDatosMultijugador {
private:
    int id;
    DtFechaHora fechaHoraComienzo;
    string nombreVideojuego;
    bool transmitidaVivo;
    string nicknameInicio;
    vector<string> nicknameJugadores;
public:
    DtDatosMultijugador(int, DtFechaHora, string, bool, string, vector<string>);
    virtual ~DtDatosMultijugador();

    int getId();
    DtFechaHora getFechaHoraComienzo();
    string getNombreVideojuego();
    bool getTransmitidaVivo();
    string getNicknameInicio();
    vector<string> getNicknameJugadores();
};

#endif /* SRC_DATATYPES_DTDATOSMULTIJUGADOR_H_ */
