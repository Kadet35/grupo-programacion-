//================================================
//==> Nombre del programa: Calculo de la edad
//==> Archivo : laedad.cpp
//==>Autor: Erick Manzaba 
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include<iostream>
using namespace std;
int main()
{

	int em_aa,em_ma,em_da,em_an,em_mn,em_dn,em_a,em_m,em_d;
	cout<<"Ingrese la fecha actual (aaaa mm dd): ";
	cin>>em_aa>>em_ma>>em_da;
	cout<<"Ingrese la fecha de nacimiento (aaaa mm dd): ";
	cin>>em_an>>em_mn>>em_dn;
	if(em_da>=em_dn){
		em_d=em_da-em_dn;
	}else{
		em_dn=em_dn+30;
		em_ma=em_ma-1;
		em_d=em_da-em_dn;
	}
	if(em_ma>=em_mn){
		em_m=em_ma-em_mn;
	}else{
		em_mn=em_mn+12;
		em_aa=em_aa-1;
		em_m=em_ma-em_mn;
	}
	em_a=em_aa-em_an;
	cout<<"La persona tiene "<<em_a<<" años "<<em_m<<" meses y "<<em_d<<" dias ";

	return 0;
}
