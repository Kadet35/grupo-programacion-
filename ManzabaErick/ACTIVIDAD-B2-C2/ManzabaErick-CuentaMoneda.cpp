//================================================
//==> Nombre del programa: Cuenta monedas
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Erick Manzaba
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include<iostream>
using namespace std;
int main()
{

	int em_n,em_c=0,em_c1=0,em_c2=0;
	float em_x,em_a=0,em_a1=0,em_a2=0,em_m=0.10;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>em_n;
	do{
		cout<<"Ingrese el valor de la mondea (0.10,0.25): ";
		cin>>em_x;
		em_c=em_c+1;
		em_a=em_a+em_x;
		if(x==m){
			em_c1=em_c1+1;
			em_a1=em_a1+x;
		}else{
			em_c2=em_c2+1;
			em_a2=em_a2+em_x;
		}
	}while(em_c>em_m);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<em_c<<endl;
	cout<<"Cantidad de total en dinero contado: "<<em_a<<endl;
	cout<<"Cantidad de monedas de 0.10cc ingresadas: "<<em_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10cc: "<<em_a1<<endl;
	cout<<"Cantidad de monedas de 0.25cc ingresadas: "<<em_c2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25cc: "<<em_a2<<endl;

	return 0;
}
