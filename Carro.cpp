#include "Carro.h"

Carro::Carro() {
	estado=new char;
	*estado='D';
	hora_entrada=new int;
	hora_salida=new int;
	minutos_entrada=new int;
	minutos_salida=new int;
	placa=new string();
	num_parqueo=new int;
}

Carro::~Carro() {
	delete estado;
	delete hora_entrada;
	delete hora_salida;
	delete minutos_entrada;
	delete minutos_salida;
	delete placa;
}

void Carro::setHora_Entrada(int *hora_entrada){
	this->hora_entrada=hora_entrada;
}
void Carro::setHora_Salida(int *hora_salida){
	this->hora_salida=hora_salida;
}
void Carro::setMinutos_Entrada(int *minutos_entrada){
	this->minutos_entrada=minutos_entrada;
}
void Carro::setMinutos_Salida(int *minutos_salida){
	this->minutos_salida=minutos_salida;
}
void Carro::setEstado(char *estado){
	this->estado=estado;
}
void Carro::setPlaca(string *placa){
	this->placa=placa;
}
void Carro::setNumparqueo(int *numparqueo){
	this->num_parqueo=numparqueo;
}
int Carro::getNumparqueo(){
	return *num_parqueo;
}
int Carro::getHora_Entrada(){
	return *hora_entrada;
}
int Carro::getHora_Salida(){
	return *hora_salida;
}
int Carro::getMinutos_Entrada(){
	return *minutos_entrada;
}
int Carro::getMinutos_Salida(){
	return *minutos_salida;
}
char Carro::getEstado(){
	return *estado;
}
string Carro::getPlaca(){
	return *placa;
}

void Carro::ingresar(){
	int opc;
	cout<<"Digite si 1- para ingresar o 2 para reservar"<<endl;
	cin>>opc;
	if(opc==1){
		cout<<"Hora de entrada: ";
		cin>>*hora_entrada;
		cout<<"Minuto de entrada: ";
		cin>>*minutos_entrada;
		cout<<"Placa: ";
		cin>>*placa;
		*estado='O';
	}
	else if(opc==2){
		cout<<"Placa: ";
		cin>>*placa;
		*estado='R';
		cout<<"El costo de la reserva es 30000, gracias por preferirnos"<<endl;
	}
}
int Carro::CalcularTarifa(){
	int horas, minutos;
	cout<<"Hora de salida: ";
	cin>>*hora_salida;
	cout<<"Minuto de salida: ";
	cin>>*minutos_salida;
	*estado='D';
	if(*minutos_salida<*minutos_entrada){
		*minutos_salida+=60;
		*hora_salida-1;
	}
	minutos=*minutos_salida-*minutos_entrada;
	horas=*hora_salida-*hora_entrada;
	if(horas==0){
		horas=800;
		return horas;
	}else if(horas>0){
		if(minutos>30){
			horas++;
			return horas*800; 
		}else if(minutos>0&&minutos<30){
			return (horas*800)+500;
		}else{
			return horas*800; 
		}
	}
}

