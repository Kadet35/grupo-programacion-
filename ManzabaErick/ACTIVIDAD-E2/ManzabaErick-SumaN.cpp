//================================================
//==> Nombre del programa: Suma
//==> Archivo : ManzabaErick-SumaN.cpp
//==>Autor: Erick Manzaba
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream>
using namespace std;

int main()
{
int em_a,em_b,em_c,em_i;
	em_c=em_c=0;
cout<<"ingrese cuantos numeros quiere sumar: \n";
cin>>em_a;
for(em_i=1;em_i<=em_a;em_i++)
{
cout<<"ingrese el valor:";
cin>>em_b;
em_c=em_c+em_b;
}
cout<<"la suma total es: "<<em_c;
cout<<endl;

return 0;
}

