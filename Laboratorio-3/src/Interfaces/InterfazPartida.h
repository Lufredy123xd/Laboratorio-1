/*
 * InterfazPartida.h
 *
 *  Created on: 23 jun. 2024
 *      Author: n1c0l
 */

#ifndef INTERFAZPARTIDA_H_
#define INTERFAZPARTIDA_H_

class InterfazPartida {
public:
	virtual void holaPartida()=0;

	InterfazPartida();
	virtual ~InterfazPartida();
};

#endif /* INTERFAZPARTIDA_H_ */
