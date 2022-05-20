//=======Nombre del programa: Edad
//====Archivo:Angulojamileth-Edad.cpp
//====Autor: Angulo Jamileth
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 12-05-2022
#include<iostream>
using namespace std;
int main()
{
	int GA_dd,GA_mm,GA_yy,GA_dd1,GA_mm1,GA_yy1,GA_da,GA_ma,GA_ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año ";
		cin>>GA_dd>>GA_mm>>GA_yy;
	cout<<"Ingrese su Fecha de Nacimiento: Dia Mes Año ";
		cin>>GA_dd1>>GA_mm1>>GA_yy1;
	if(GA_dd<GA_dd1){
		GA_dd=GA_dd+30;
		GA_mm=GA_mm-1;
		GA_da=GA_dd-GA_dd1;
	}
	else{
		GA_da=GA_dd-GA_dd1;
	}
	if(GA_mm<GA_mm1){
		GA_mm=GA_mm+12;
		GA_yy=GA_yy-1;
		GA_ma=GA_mm-GA_mm1;
	}
	else{
		GA_ma=GA_mm-GA_mm1;
	}
	ya=yy-yy1;
	cout<<"Usted tiene: "<<GA_ya<<" años  "<<GA_ma<<" meses "<<" y "<<GA_da<<" dia "<<endl;
	cout<<"//=======Nombre de programa: Edad"<<endl;
	cout<<"//====Archivo:Angulojamileth-Edad.cpp"<<endl;
	cout<<"//====Autor: Angulo Jamileth"<<endl;
	cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
	cout<<"====Fecha de actualizacion: 12-05-2022"<<endl;
	return 0;
}
