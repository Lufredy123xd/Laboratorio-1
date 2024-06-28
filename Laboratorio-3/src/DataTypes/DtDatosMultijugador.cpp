#include "DtDatosMultijugador.h"

DtDatosMultijugador::DtDatosMultijugador(int nId, DtFechaHora nFechaHoraComienzo, string nNombreVideojuego, bool nTransmitidaVivo, string nNicknameInicio, vector<string> nNicknameJugadores)
    : fechaHoraComienzo(nFechaHoraComienzo) {
    this->id = nId;
    this->fechaHoraComienzo = nFechaHoraComienzo;
    this->nombreVideojuego = nNombreVideojuego;
    this->transmitidaVivo = nTransmitidaVivo;
    this->nicknameInicio = nNicknameInicio;
    this->nicknameJugadores = nNicknameJugadores;
}

DtDatosMultijugador::~DtDatosMultijugador() {}

int DtDatosMultijugador::getId() {
    return this->id;
}

DtFechaHora DtDatosMultijugador::getFechaHoraComienzo() {
    return this->fechaHoraComienzo;
}

string DtDatosMultijugador::getNombreVideojuego() {
    return this->nombreVideojuego;
}

bool DtDatosMultijugador::getTransmitidaVivo() {
    return this->transmitidaVivo;
}

string DtDatosMultijugador::getNicknameInicio() {
    return this->nicknameInicio;
}

vector<string> DtDatosMultijugador::getNicknameJugadores() {
    return this->nicknameJugadores;
}
