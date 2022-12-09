#include "Coleccion.h"

Coleccion::Coleccion() {
	tam=new int;
	cout<<"Digite el tamanno del parqueo"<<endl;
	cin>>*tam;
	vec=new Carro[*tam];
}

Coleccion::~Coleccion() {
	delete tam;
	delete vec;
}

void Coleccion::menu(){
	int opc,i=0,*ptri;
	for(;;){
	cout<<endl;
	cout<<"1-Ingresar o reservar"<<endl;
	cout<<"2-Calcular tarifa"<<endl;
	cout<<"3-Salir"<<endl;
	cin>>opc;
	switch(opc){
		system("cls");
	case 1:{
		for(i=0;i<*tam;i++){
			cout<<vec[i].getEstado();
			if((vec[i].getEstado()!='O')&&(vec[i].getEstado()!='R')){
				*ptri=i;
				vec[i].setNumparqueo(ptri);
				vec[i].ingresar();
				cout<<"El numero de campo de su Auto es: "<<i<<endl;
				i=*tam;
			}
			}
		break;
	}
	case 2:{
			cout<<"Digite el numero de campo del auto"<<endl;
			cin>>i;
			cout<<"Monto total: "<<vec[i].CalcularTarifa();
				break;
		}
	case 3:{
			cout<<"Cerrando el programa..."<<endl;
			system("Pause");
			exit(0);
			break;
			}
	default:{
				cout<<"Opcion invalida"<<endl;
			break;	
			}
	}//switch
	}//for
}

