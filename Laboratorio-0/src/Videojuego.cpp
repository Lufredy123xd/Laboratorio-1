#include "Videojuego.h"
#include "TipoJuego.h"
#include <string>
#include <iostream>

Videojuego::Videojuego()
{

	this->nombre = "";
	this->genero = NULL;
	this->totalHorasDeJuego = 0;
}

Videojuego::Videojuego(string nombre, int totalJuego, TipoJuego *genero)
{
	this->nombre = nombre;
	this->totalHorasDeJuego = totalJuego;
	this->genero = genero;
}

string Videojuego::getNombre()
{
	return this->nombre;
}

TipoJuego *Videojuego::getGenero()
{
	return this->genero;
}

void Videojuego::setNombre(string Nombre)
{
	this->nombre = Nombre;
}

void Videojuego::agregarVideojuego(string nombre, TipoJuego *genero)
{
	this->nombre = nombre;
	this->genero = genero;
}

Videojuego::~Videojuego()
{
	// TODO Auto-generated destructor stub
}

int Videojuego::calcularTotalHorasVideojuego(vector<Partida*> partidas)
{
    int HorasJuego=0;

    for(int i=0;i <partidas.size();i++)
    {
        if(partidas[i]->getVjuego()->getNombre() == this->nombre)
        {
            HorasJuego += partidas[i]->darTotalHorasParticipantes();
        }
    }

    this->totalHorasDeJuego = HorasJuego;
    return HorasJuego;
}


int Videojuego::getotalHorasDeJuego()
{
	return this->totalHorasDeJuego;
}

void Videojuego::setotalHorasDeJuego(int totalHoras)
{
	this->totalHorasDeJuego = totalHoras;
}
