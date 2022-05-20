//===========================================
//=======Nombre del programa: punto de venta 
//====Archivo:Angulojamileth-puntodeventa.cpp
//====Autor: Angulo Jamileth
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 12-05-2022
#include<iostream>
using namespace std;
int main()
{
	int GA_C=0,GA_P;
	float GA_A=0,GA_x,GA_Tb,GA_PIVA,GA_Pdsc,GA_IVA=0.12,GA_dsc=0.30,GA_VT;
	cout<<"Ingrese Cantidad de productos a Comprar: ";
	cin>>GA_P;
	do{
		cout<<"Ingrese el valor del producto: ";
		cin>>GA_x;
		GA_C=GA_C+1;
		GA_A=GA_A+GA_x;
		GA_PIVA=GA_A*GA_IVA;
		cout<<"El valor del Iva de su compra es:$ "<<GA_PIVA<<endl;
		GA_Pdsc=GA_A*GA_dsc;
		cout<<"El valor del Descuento de su Compra es:$ "<<GA_Pdsc<<endl;
		GA_Tb=GA_PIVA+GA_Pdsc;
	}while(GA_C<GA_P);
	if(GA_Tb==GA_A){
		cout<<"Su compra aplica a Descuento: "<<GA_Tb<<endl;
		GA_IVA=GA_Tb*GA_PIVA/100;
		GA_dsc=GA_Tb*GA_Pdsc/100;
	}else{
		GA_VT=GA_A+GA_PIVA-GA_Pdsc;
		cout<<"El valor total a pagar es:$ "<<GA_VT<<endl;
	}
	return 0;
}
