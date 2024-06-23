

#include "ControladorSuscripcion.h"

ControladorSuscripcion* ControladorSuscripcion::instancia = nullptr;

ControladorSuscripcion::ControladorSuscripcion() {
	// TODO Auto-generated constructor stub

}

ControladorSuscripcion::~ControladorSuscripcion() {
	// TODO Auto-generated destructor stub
}

ControladorSuscripcion* ControladorSuscripcion::getInstanciaControladorSuscripcion()
{
	if (instancia == nullptr)
	{
		instancia = new ControladorSuscripcion();
	}

	return instancia;
}
void ControladorSuscripcion::printss(){

	cout<<"HOLA SOY LA INSTANCIA Suscripcion";
}
