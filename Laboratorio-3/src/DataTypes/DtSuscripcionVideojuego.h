/*
 * DtSuscripcionVideojuego.h
 *
 *  Created on: 27 jun. 2024
 *      Author: Valentino Vignolo
 */

#ifndef SRC_DATATYPES_DTSUSCRIPCIONVIDEOJUEGO_H_
#define SRC_DATATYPES_DTSUSCRIPCIONVIDEOJUEGO_H_
#include <string>
using namespace std;

enum validez {Mensual, Trimestral, Anual, Ilimitado};

class DtSuscripcionVideojuego {
private:
  validez tipoValidez;
  int costoSuscripcion;
  string nombreVideojuego;
public:
  DtSuscripcionVideojuego();
  virtual ~DtSuscripcionVideojuego();
  validez getTipoValidez();
  int getCostoSuscripcion();
  string getNombreVideojuego();

  
};


#endif /* SRC_DATATYPES_DTSUSCRIPCIONVIDEOJUEGO_H_ */
