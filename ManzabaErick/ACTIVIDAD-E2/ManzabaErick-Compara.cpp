//================================================
//==> Nombre del programa: Compara dos numeros
//==> Archivo : Compara.cpp
//==>Autor: Erick Manzaba 
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include<iostream>
using namespace std;
int main()
{
float em_a,em_b; 
cout<<"ingrese primer valor: ";
cin>>em_a; 
cout<<"ingrese segundo valor: ";
cin>>em_b;
if(em_a==em_b)
{
cout<<"los valores son iguales: "<<em_a;
}
else
{
if(em_a>em_b)
{
cout<<"el primero valor es mayor: "<<em_a;
}
else {cout<<"el mayor es el segundo valor: "<<em_b;}
}
return 0;
}
