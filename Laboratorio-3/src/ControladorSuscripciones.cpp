#include "ControladorSuscripciones.h"


ControladorSuscripciones* ControladorSuscripciones::instanciaSuscripciones = nullptr;


ControladorSuscripciones::ControladorSuscripciones() {

}


ControladorSuscripciones* ControladorSuscripciones::getInstanciaSuscripciones() {
    if (instanciaSuscripciones == nullptr) {
        instanciaSuscripciones = new ControladorSuscripciones();
    }
    return instanciaSuscripciones;
}


ControladorSuscripciones::~ControladorSuscripciones() {

}
