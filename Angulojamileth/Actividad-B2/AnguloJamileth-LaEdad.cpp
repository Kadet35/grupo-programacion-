#include<iostream>
using namespace std;
int main()
{
	int dd,mm,yy,dd1,mm1,yy1,da,ma,ya;
	cout<<"Ingrese la Fecha Actual: Dia Mes Año ";
		cin>>dd>>mm>>yy;
	cout<<"Ingrese su Fecha de Nacimiento: Dia Mes Año ";
		cin>>dd1>>mm1>>yy1;
	if(dd<dd1){
		dd=dd+30;
		mm=mm-1;
		da=dd-dd1;
	}
	else{
		da=dd-dd1;
	}
	if(mm<mm1){
		mm=mm+12;
		yy=yy-1;
		ma=mm-mm1;
	}
	else{
		ma=mm-mm1;
	}
	ya=yy-yy1;
	cout<<"Usted tiene: "<<ya<<" años  "<<ma<<" meses "<<" y "<<da<<" dia "<<endl;
	return 0;
}
