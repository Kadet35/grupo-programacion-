//=======Nombre del programa: Comparar numeros 
//====Archivo:Angulojamileth-compara.cpp
//====Autor: Angulo Jamileth
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 12-05-2022
#include<iostream>
using namespace std;
int main()
{
	float AG_x,AG_y;
	cout<<"Ingrese valor de AG_X: ";
	cin>>x;
	cout<<"Ingrese valor de AG_Y: ";
	cin>>AG_y;
	if(x==y){
		cout<<"El valor de AG_X: "<<x<<" es igual a AG_Y: "<<y<<endl;
	}else{
		if(AG_x<AG_y){
			cout<<"El valor de AG_X: "<<x<<" es menor a AG_Y: "<<y<<endl;
		}else{
			cout<<"El valor de AG_Y: "<<y<<" es menor a AG_X: "<<x<<endl;
		}
	}
	
	return 0;
}
