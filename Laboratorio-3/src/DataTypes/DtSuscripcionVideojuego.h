/*
 * DtSuscripcionVideojuego.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTSUSCRIPCIONVIDEOJUEGO_H_
#define SRC_DATATYPES_DTSUSCRIPCIONVIDEOJUEGO_H_
#include <string>
#include "../Clases/Suscripcion.h"
using namespace std;

enum validez {
		Mensual, Trimestral, Anual, Ilimitado};

class DtSuscripcionVideojuego {
private:
  string tipo;
  int costoSuscripcion;
  validez tipoValidez;
public:
  DtSuscripcionVideojuego();
  virtual ~DtSuscripcionVideojuego();

  string getTipo() const;
  void setTipo(const string& tipo);
  int getCostoSuscripcion() const;
  void setCostoSuscripcion(int costoSuscripcion);
};


#endif /* SRC_DATATYPES_DTSUSCRIPCIONVIDEOJUEGO_H_ */
