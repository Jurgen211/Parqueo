#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;
class Carro {
public:
	Carro();
	virtual ~Carro();
	void ingresar();
	int CalcularTarifa();
	void setHora_Entrada(int *hora_entrada);
	void setHora_Salida(int *hora_salida);
	void setMinutos_Entrada(int *minutos_entrada);
	void setMinutos_Salida(int *minutos_salida);
	void setEstado(char *estado);
	void setPlaca(string *placa);
	void setNumparqueo(int *numparqueo);
	int getHora_Entrada();
	int getHora_Salida();
	int getMinutos_Entrada();
	int getMinutos_Salida();
	char getEstado();
	int getNumparqueo();
	string getPlaca();
private:
	int *hora_entrada;
	int *hora_salida;
	int *minutos_entrada;
	int *minutos_salida;
	char *estado;
	string *placa;
	int *num_parqueo;
};

#endif

