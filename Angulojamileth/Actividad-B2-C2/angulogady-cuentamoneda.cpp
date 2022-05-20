//=======Nombre del programa: Contador de Monedas
//====Archivo:Angulojamileth-CuentaMoneda.cpp
//====Autor: Angulo Jamileth
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 12-05-2022
#include<iostream>
using namespace std;
int main()
{
	int GA_n,GA_c=0,GA_c1=0,GA_c2=0;
	float GA_x,GA_a=0,GA_a1=0,GA_a2=0;
	cout<<"cantidad de monedas a ingresar: ";
	cin>>GA_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>GA_x;
		GA_c=GA_c+1;
		GA_a=GA_a+GA_x;
	if(GA_x==(float)0.10){
		GA_c1=GA_c1+1;
		GA_a1=GA_a1+x;
	}else{
		GA_c2=GA_c2+1;
		GA_a2=GA_a2+GA_x;
	}
	}while(GA_c<GA_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<AG_c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<GA_a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<GA_c1<<endl;
    cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<GA_a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<GA_c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<GA_a2<<endl;
	cout<<"//=======Nombre de programa: Contador de Monedas"<<endl;
	cout<<"//====Archivo:Angulojamileth-CuentaMoneda.cpp"<<endl;
	cout<<"//====Autor: Angulo Jamileth"<<endl;
	cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
	cout<<"====Fecha de actualizacion: 12-05-2022"<<endl;
	return 0;
}
