#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>

#include "Jugador.h"
#include "Videojuego.h"
#include "Partida.h"
#include "Sistema.h"
#include "DtFechaHora.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"

// Función para obtener la hora y fecha actual
std::chrono::system_clock::time_point obtenerHoraActual()
{
	return std::chrono::system_clock::now();
}

// Variables globales
TipoJuego *generos = NULL;
Partida *nuevaPartida = NULL;

Sistema::Sistema()
{
}

Sistema::~Sistema()
{
}

int cantidadPartida = 0;

// Variables Jugador
int cantidadJugadores = 0;
string nickName;
string contrasenia;
int edad;

// Variable videojuegos
int cantidadVideojuegos = 0;
string nombreVideojuego;
string nombretipo;
string descripciontipo;

vector<Jugador *> Sistema::obtenerJugadores(int cantJugadores)
{
	vector<Jugador *> jugadoresCopia;

	jugadoresCopia = jugadores;

	cantJugadores = jugadoresCopia.size();
	cantidadJugadores = cantJugadores;
	return jugadoresCopia;
}

vector<Partida *> Sistema::obtenerPartidas(string videojuego, int cantPartidas)
{
	vector<Partida *> PartidasCopia;

	// Buscar el videojuego correspondiente al nombre
	for (int i = 0; i < partidas.size(); i++)
	{
		if (partidas[i]->getVjuego()->getNombre() == videojuego)
		{
			PartidasCopia.push_back(partidas[i]);
			cantPartidas++;
		}
	}
	cantidadPartida = cantPartidas;

	return PartidasCopia;
}

void Sistema::mostrarPartida(vector<Partida *> PartidasCopia)
{
	PartidaIndividual *pIndividual = NULL;
	PartidaMultijugador *pMultijugador = NULL;
	if (PartidasCopia.empty() == false)
	{
		for (int i = 0; i < PartidasCopia.size(); ++i)
		{
			pIndividual = dynamic_cast<PartidaIndividual *>(PartidasCopia[i]);
			pMultijugador = dynamic_cast<PartidaMultijugador *>(PartidasCopia[i]);

			if (pIndividual != NULL)
			{
				string continuada;
				if (pIndividual->getContinuaPartidaAnterior() == true)
				{
					continuada = "si";
				}
				else
				{
					continuada = "no";
				}
				cout << "-.-.-.-.-Partidas obtenidas cantidad: "
					 << to_string(cantidadPartida) << "-.-.-.-.-" << endl;
				cout << "Partida individual:" << endl;
				cout << "Nombre Jugador:"
					 << pIndividual->getJugador()->getnickName() << endl;
				cout << "Duracion de la partida:"
					 << to_string(pIndividual->getDuracion()) << endl;
				cout << "¿Esta es una continuacion de la partida anterior?:"
					 << continuada << endl;
				cout << endl;
			}
			else if (pMultijugador != NULL)
			{
				string transmitida;
				if (pMultijugador->getTransmitidaEnVivo() == true)
				{
					transmitida = "si";
				}
				else
				{
					transmitida = "no";
				}
				cout << "-.-.-.-.-Partidas obtenidas cantidad: "
					 << to_string(cantidadPartida) << "-.-.-.-.-" << endl;
				cout << "Partida multijugador:" << endl;
				cout << "¿Esta es transmitida en vivo?:" << transmitida << endl;
				cout << "Duracion de la partida:"
					 << to_string(pMultijugador->getDuracion()) << endl;
				cout << "Cantidad de jugadores :"
					 << to_string(pMultijugador->getmultiJugadores().size() + 1)
					 << endl;
				cout << "Nombre de jugador:" << pMultijugador->getJugador()->getnickName() << endl;
				for (Jugador *pJ : pMultijugador->getmultiJugadores())
				{

					cout << "Nombre de jugador:" << pJ->getnickName() << endl;
				}
				cout << endl;
			}
		}
	}
	else
	{
		cout << "-.-.-.-.-Partidas obtenidas cantidad: "
			 << to_string(cantidadPartida) << "-.-.-.-.-" << endl;
	}
}

vector<Videojuego*> Sistema::obtenerVideojuegos(int cantVideojuegos) {
    vector<Videojuego*> videojuegosCopia;

    // Recorre todos los videojuegos
    for (size_t i = 0; i < videojuegos.size(); i++) {
        int totalHorasDeJuego = 0;

        // Recopila todas las partidas asociadas con este videojuego
        vector<Partida*> partidasDeEsteVideojuego;
        for (int j = 0; j < partidas.size(); ++j) {
            if (partidas[j]->getVjuego() == videojuegos[i]) {
                partidasDeEsteVideojuego.push_back(partidas[j]);
            }
        }

        // Calcula el total de horas de juego para las partidas individuales asociadas con este videojuego
        for (int j = 0; j < partidasDeEsteVideojuego.size(); ++j) {
            PartidaIndividual* pIndividual = dynamic_cast<PartidaIndividual*>(partidasDeEsteVideojuego[j]);
            if (pIndividual != nullptr) {
                totalHorasDeJuego += pIndividual->getDuracion();
            }
        }

        // Calcula el total de horas de juego para las partidas multijugador asociadas con este videojuego
        for (int j = 0; j < partidasDeEsteVideojuego.size(); ++j) {
            PartidaMultijugador* pMultijugador = dynamic_cast<PartidaMultijugador*>(partidasDeEsteVideojuego[j]);
            if (pMultijugador != nullptr) {
                totalHorasDeJuego += pMultijugador->getDuracion() * (pMultijugador->getmultiJugadores().size() + 1);
            }
        }

        // Crea una instancia de Videojuego con la información relevante y agrégala al vector
        Videojuego* info = new Videojuego(videojuegos[i]->getNombre(), totalHorasDeJuego, videojuegos[i]->getGenero());
        videojuegosCopia.push_back(info);
    }

    // Actualiza la cantidad de videojuegos
    cantVideojuegos = videojuegos.size();
    cantidadVideojuegos = cantVideojuegos;

    return videojuegosCopia;
}


void Sistema::agregarJugador()
{
	Jugador *nuevoJugador = new Jugador();

	string edadSt;

	cout << "Ingrese el nombre del jugador: " << endl;
	cin.ignore();
	getline(cin, nickName);

	cout << "Ingrese la contraseña del jugador: " << endl;
	cin >> contrasenia;

	cout << "Ingrese la edad del jugador: " << endl;
	cin >> edadSt;

	if (edadSt.find_first_not_of("0123456789") != string::npos)
	{
		cout << "El valor de edad tiene que ser un número entero" << endl;
	}
	else
	{
		edad = stoi(edadSt);

		try
		{
			for (Jugador *jugador : jugadores)
			{
				if (jugador->getnickName() == nickName)
				{
					throw runtime_error(
						"El jugador ya esta registrado en el sistema");
				}
			}

			nuevoJugador->agregarJuego(nickName, edad, contrasenia);
			jugadores.push_back(nuevoJugador);
		}
		catch (const runtime_error &e)
		{
			cout << "Error: " << e.what() << endl;
		}
	}
}

void Sistema::agregarVideojuego()
{
	Videojuego *IngresoJuego = new Videojuego();

	cout << "Ingrese nombre del videojuego. " << endl;
	cin.ignore(); // ingora el salto de linea, es decir el endl, para que el getline te permita ingresar datos
	getline(cin, nombreVideojuego);

	cout << "Ingrese nombre del genero de videojuego. " << endl;
	getline(cin, nombretipo);

	cout << "Ingrese descripcion del videojuego. " << endl;
	getline(cin, descripciontipo);

	generos = new TipoJuego(nombretipo, descripciontipo);

	bool juegoExistente = false;
	for (size_t i = 0; i < videojuegos.size(); i++)
	{
		if (nombreVideojuego == videojuegos[i]->getNombre())
		{
			juegoExistente = true;

			cout << "El nombre del videojuego se repite, no se puede ingresar."
				 << endl;
			break;
		}
	}

	if (!juegoExistente)
	{
		IngresoJuego->agregarVideojuego(nombreVideojuego, generos);
		videojuegos.push_back(IngresoJuego);
	}
}

void Sistema::mostrarJugadores()
{
	vector<Jugador *> jugadoresRegistrados = obtenerJugadores(cantidadJugadores);

	cout << "-.-.-.-.-Jugadores registrados cantidad: "<< to_string(cantidadJugadores) << "-.-.-.-.-" << endl;
	for (Jugador *jugador : jugadoresRegistrados)
	{
		cout << "Nombre del Jugador:" << jugador->getnickName() << endl;
		cout << "Edad del Jugador:" << jugador->getEdad() << endl;
		cout << endl;
	}
}

void Sistema::mostrarVideojuegos()
{
	vector<Videojuego *> videojuegosRegistrados = obtenerVideojuegos(cantidadVideojuegos);

	cout << "-.-.-.-.-Videojuegos registrados cantidad: " << to_string(cantidadVideojuegos) << "-.-.-.-.-" << endl;

	for (Videojuego *videojuego : videojuegosRegistrados)
	{
		cout << "Nombre del Videojuego:" << videojuego->getNombre() << endl;
		cout << "Nombre del genero del Videojuego:" << videojuego->getGenero()->getNombreG()
			 << endl;
		cout << "Descoripcion del Videojuego:" << videojuego->getGenero()->getDescripcion()
			 << endl;
		cout << "tiempoTotalJuego:" << videojuego->getotalHorasDeJuego()
			 << endl;
		cout << endl;
	}
}

void Sistema::agregarPartidaIndividual()
{
	float duracion = 0;
	bool contAnt = false;

	cout << "Ingrese la duracion de la parida" << endl;
	cin >> duracion;

	std::chrono::system_clock::time_point ahora = obtenerHoraActual();

	// Convertir la hora actual a un objeto time_t
	std::time_t horaActual = std::chrono::system_clock::to_time_t(ahora);

	// Convertir time_t a una estructura tm para la hora local
	std::tm *horaLocal = std::localtime(&horaActual);

	// Extraer los componentes de la fecha y hora
	int dia = horaLocal->tm_mday;
	int mes = horaLocal->tm_mon + 1;	  // El mes comienza desde 0, así que sumamos 1
	int anio = horaLocal->tm_year + 1900; // Años desde 1900
	int hora = horaLocal->tm_hour;
	int minuto = horaLocal->tm_min;
	int segundo = horaLocal->tm_sec;

	DtFechaHora *fecha = new DtFechaHora(dia, mes, anio, hora, minuto, segundo);
	Partida *nuevaPartidaIndividual = new PartidaIndividual(contAnt, fecha, duracion);
	partidas.push_back(nuevaPartidaIndividual);
}

void Sistema::agregarPartidaMultijugador()
{

	bool transmitidaEnVivo;
	float duracion = 0;
	string opcion;
	cout << "Ingrese la duracion de la parida" << endl;
	cin >> duracion;

	std::chrono::system_clock::time_point ahora = obtenerHoraActual();

	// Convertir la hora actual a un objeto time_t
	std::time_t horaActual = std::chrono::system_clock::to_time_t(ahora);

	// Convertir time_t a una estructura tm para la hora local
	std::tm *horaLocal = std::localtime(&horaActual);

	// Extraer los componentes de la fecha y hora
	int dia = horaLocal->tm_mday;
	int mes = horaLocal->tm_mon + 1;	  // El mes comienza desde 0, así que sumamos 1
	int anio = horaLocal->tm_year + 1900; // Años desde 1900
	int hora = horaLocal->tm_hour;
	int minuto = horaLocal->tm_min;
	int segundo = horaLocal->tm_sec;

	DtFechaHora *fecha1 = new DtFechaHora(dia, mes, anio, hora, minuto, segundo);

	cout << "Desea transmitir en vivo [Ingrese si o no] " << endl;
	cin >> opcion;

	if (opcion == "si")
	{
		transmitidaEnVivo = true;
	}
	else if (opcion == "no")
	{
		transmitidaEnVivo = false;
	}
	else
	{
		cout << "Ingrese si o no" << endl;
		return;
	}

	PartidaMultijugador *nuevaPartidaMultijugador = new PartidaMultijugador(
		transmitidaEnVivo, fecha1, duracion);
	partidas.push_back(nuevaPartidaMultijugador);
}

void Sistema::agregarPartida()
{

	int opcion;

	cout << "Quiere iniciar una partida individaul o multijugador" << endl;
	cout << "1. Partida Individual" << endl;
	cout << "2. Partida Multijugador" << endl;
	cout << "Ingrese una opcion: " << endl;
	cin >> opcion;
	cout << endl;

	switch (opcion)
	{
	case 1:
		agregarPartidaIndividual();
		break;
	case 2:
		agregarPartidaMultijugador();
		break;
	}
}

void Sistema::iniciarPartida(string nickname, string namevideojuego, Partida *datos)
{
    string opcion;
    vector<Jugador *> jugadoresEnPartida;

    // Buscar el jugador correspondiente al nickname
    Jugador *jugador = nullptr;
    for (Jugador *j : jugadores)
    {
        if (j->getnickName() == nickname)
        {
            jugador = j;
            break;
        }
    }

    // Buscar el videojuego correspondiente al nombre
    Videojuego *videojuego = nullptr;
    for (Videojuego *v : videojuegos)
    {
        if (v->getNombre() == namevideojuego)
        {
            videojuego = v;
            break;
        }
    }

    // Verificar si se encontró el jugador y el videojuego
    if (jugador == nullptr || videojuego == nullptr)
    {
        cout << "No se pudo iniciar la partida. Jugador o videojuego no encontrado." << endl;
        delete datos;
		partidas.erase(partidas.begin() + partidas.size() - 1);
        return;
    }

    bool continuarPartidaAnterior = false; // Variable para rastrear si se va a continuar una partida anterior

    // Verificar si la partida es individual
    PartidaIndividual *pIndividual = dynamic_cast<PartidaIndividual *>(datos);
    if (pIndividual != nullptr)
    {
        // Buscar partida anterior
        for (Partida *p : partidas)
        {
            if (p->getVjuego() != nullptr && p->getJugador() != nullptr)
            {
                if (p->getVjuego()->getNombre() == namevideojuego && p->getJugador()->getnickName() == nickname)
                {
                    cout << "Desea continuar partida anterior [Ingrese si o no] " << endl;
                    cin >> opcion;

                    if (opcion == "si")
                    {
                        // Continuar partida anterior
                        PartidaIndividual *pExisteIndividual = dynamic_cast<PartidaIndividual *>(p);
                        if (pExisteIndividual != nullptr)
                        {
                            pExisteIndividual->setDuracion(pExisteIndividual->getDuracion() + pIndividual->getDuracion());
                            delete datos; // No necesitamos el objeto de partida actual, ya que estamos continuando la anterior
							partidas.erase(partidas.begin() + partidas.size() - 1);
                            continuarPartidaAnterior = true;
							pExisteIndividual->setContinuarPartidaAnterior(true);
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }

    if (!continuarPartidaAnterior)
    {
        // Establecer el videojuego asociado a la partida
        datos->setVjuego(videojuego);
        datos->setJugador(jugador);
		

        // Si no se va a continuar una partida anterior, simplemente establece el  continuar partida anterior a false
        if (pIndividual != nullptr)
        {
            pIndividual->setContinuarPartidaAnterior(false);
        }
    }

    // Si la partida es multijugador, pedir nombres adicionales de jugadores
    PartidaMultijugador *pMultijugador = dynamic_cast<PartidaMultijugador *>(datos);
    if (pMultijugador != nullptr)
    {
        string seguir, Jname;
        do
        {
            cout << "Ingrese nombre de otro jugador" << endl;
            cin >> Jname;
            if (Jname == jugador->getnickName())
            {
                cout << "No se puede ingresar el mismo jugador a la lista de jugadores" << endl;
            }
            else
            {
                // Buscar el jugador correspondiente al nickname
                Jugador *jugador = nullptr;
                for (Jugador *j : jugadores)
                {
                    if (j->getnickName() == Jname)
                    {
                        jugador = j;
                        break;
                    }
                }

                // Verificar si se encontró el jugador
                if (jugador == nullptr)
                {
                    cout << "No se encontró el Jugador." << endl;
                }
                else
                {
                    jugadoresEnPartida.push_back(jugador);
                }
            }

            cout << "¿Ingresa otro Jugador?" << endl;
            cin >> seguir;
        } while (seguir == "si");

        pMultijugador->setmultiJugadores(jugadoresEnPartida);
    }

    cout << "Partida iniciada correctamente" << endl;
}
