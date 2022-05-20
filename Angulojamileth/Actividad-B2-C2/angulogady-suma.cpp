//=======Nombre del programa: Suma de dos numeros
//====Archivo:Angulojamileth-SumaN.cpp
//====Autor: Angulo Jamileth
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 12-05-2022
#include<iostream>
using namespace std;
int main()
{
	int AG_C=0,AG_a;
	float AG_S=0,AG_Z;
	cout<<"Ingrese cantidad de numeros a sumar: ";
	cin>>AG_a;
	do{
		cout<<"Ingrese un numero: ";
		cin>>AG_Z;
		AG_C=AG_C+1;
		AG_S=AG_S+AG_Z;
	}while(AG_C<AG_a);
	cout<<"//=======Nombre de programa: Suma de dos numeros"<<endl;
	cout<<"//====Archivo:Angulojamileth-SumaN.cpp"<<endl;
	cout<<"//====Autor: Angulo Jamileth"<<endl;
	cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
	cout<<"====Fecha de actualizacion: 12-05-2022"<<endl;

	cout<<"La suma total es: "<<AG_S<<endl;
	return 0;
}
