/*
 * DtFecha.cpp
 *
 *  Created on: 26 jun. 2024
 *      Author: Luciano Guerrero
 */

#include "DtFecha.h"

DtFecha::DtFecha(int anio, int mes, int dia, int hora, int minuto, int segundo)
{
	this->anio=anio;
	this->mes=mes;
	this->dia=dia;
	this->hora=hora;
	this->minuto=minuto;
	this->segundo=segundo;
}

DtFecha::~DtFecha() {
	// TODO Auto-generated destructor stub
}

int DtFecha::getAnio()
{
	return this->anio;
}

int DtFecha::getMes()
{
	return this->mes;
}

int DtFecha::getDia()
{
	return this->dia;
}

int DtFecha::getHora()
{
	return this->hora;
}

int DtFecha::getMinuto()
{
	return this->minuto;
}

int DtFecha::getSegundo()
{
	return this->segundo;
}

void DtFecha::setAnio(int anio)
{
	this->anio=anio;
}

void DtFecha::setMes(int mes)
{
	this->mes=mes;
}

void DtFecha::setDia(int dia)
{
	this->dia=dia;
}

void DtFecha::setHora(int hora)
{
	this->hora=hora;
}

void DtFecha::setMinuto(int minuto)
{
	this->minuto=minuto;
}

void DtFecha::setSegundo(int segundo)
{
	this->segundo=segundo;
}


