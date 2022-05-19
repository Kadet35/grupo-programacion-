//================================================
//==> Nombre del programa: Punto de venta
//==> Archivo : PuntoVenta.cpp
//==>Autor: Erick Manzaba 
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream>
using namespace std;
int main()
{

	float em_x,em_c=0,em_a=0,em_n,em_iva,em_des,em_vb,em_viva,em_vdes,em_vf;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>em_n;
	cout<<"Ingrese el iva: ";
	cin>>em_iva;
	cout<<"Ingrese el descuento: ";
	cin>>em_des;
	do{
		cout<<"Ingrese los numero: ";
		cin>>em_x;
		em_c=em_c+1;
		em_a=em_a+em_x;
	}while(em_c<em_n);
	em_vb=em_a;
	em_viva=em_vb*em_iva/100;
	em_vdes=em_vb*em_des/100;
	em_vf=em_vb+em_viva-em_vdes;
	cout<<"El valor final a pagar es: ";
	cout<<em_vf<<endl;
}

