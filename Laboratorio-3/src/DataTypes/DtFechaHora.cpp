/*
 * DtFecha.cpp
 *
 *  Created on: 21 mar. 2024
 *      Author: Luciano Guerrero y Valentino Vignolo
 */

#include <iostream>
#include <string>

#include "DtFechaHora.h"
using namespace ::std;

DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto, int segundo) {
	// TODO Esbozo de constructor generado automáticamente
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
	this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

DtFechaHora::~DtFechaHora() {
	// TODO Esbozo de destructor generado automáticamente
}

int DtFechaHora::getAnio()  {
	return this->anio;
}

int DtFechaHora::getDia()  {
	return this->dia;
}

int DtFechaHora::getMes()  {
	return this->mes;
}

int DtFechaHora::getHora() {
    return this->hora;
}

int DtFechaHora::getMinuto() {
    return this->minuto;
}

int DtFechaHora::getSegundo() {
    return this->segundo;
}

//FUNCIONES
string DtFechaHora::mostrarFecha() {
	string dia, mes, anio, hora, minuto, segundo;
	dia = to_string(this->dia);
	mes = to_string(this->mes);
	anio = to_string(this->anio);
	hora = to_string(this->hora);
    minuto = to_string(this->minuto);
    segundo = to_string(this->segundo);
    return dia + "/" + mes + "/" + anio + " " + hora + ":" + minuto + ":" + segundo;
}
