#ifndef COLECCION_H
#define COLECCION_H
#include <iostream>
#include "Carro.h"
#include "windows.h"
using namespace std;

class Coleccion {
public:
	Coleccion();
	virtual ~Coleccion();
	void menu();
private:
	Carro *vec;
	int *tam;
};

#endif

