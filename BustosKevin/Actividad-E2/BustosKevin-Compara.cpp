//================================================
//==> Nombre del programa: compara dos numeros editado
//==> Archivo : compara.cpp
//==>Autor: Kevin Bustos
//==>Fecha de elaboración: 2022-05-20
//==>Fecha ultima actualización: 2022-05-120
//=================================================

#include<iostream>
using namespace std;

int main()
{
float kb_a, kb_b; 
cout<<"ingrese primer valor: \n";
cin>>kb_a; 
cout<<"ingrese segundo valor: \n";
cin>>kb_b;
if(kb_a==kb_b)
{
cout<<"los valores son iguales: \n"<<kb_a;
}
else
{
if(kb_a>kb_b)
{
cout<<"el primero valor es mayor: \n"<<kb_a;
}
else {cout<<"el mayor es el segundo valor: \n"<<kb_b;}
}
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: comparar dos numeros editado"<<endl;
cout<<"//==> Archivo : compara.cpp"<<endl;
cout<<"//==>Autor: Kevin Bustos"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-05-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-120"<<endl;
cout<<"//================================================="<<endl;
  return 0;
}
