//================================================
//==> Nombre del programa: Puntoventa
//==> Archivo : BustosKevin-Puntoventa.cpp
//==>Autor: Kevin Bustos
//==>Fecha de elaboración: 2022-05-20
//==>Fecha ultima actualización: 2022-05-120
//=================================================

#include<iostream>
using namespace std;

int main()
{
int kb_a, kb_b, kb_c, kb_i, kb_d, kb_e, kb_f, kb_g;
cout<< "ingrese cuantos productos son: \n";
cin>>kb_a;
for(kb_i=1; kb_i<=kb_a; kb_i++)
{
cout<< "ingre precio del producto "<<kb_i<<"\n";
cin>>kb_b;
kb_c=kb_c+kb_b;
}
cout<< "el valor bruto es: "<<kb_c<<"\n";
kb_d=kb_c*0.15;
cout<< "el valor del iva es: "<<kb_d<<"\n";
kb_e=kb_c+kb_d;
cout<< "el valor bruto mas el iva es: "<<kb_e<<"\n";
kb_f=kb_e*0.10;
cout<< "se le aplico un descuento de 10% a su compra: "<<kb_f<<"\n";
kb_g=kb_e-kb_f;
cout<< "el valor total a pagar es: "<<kb_g<<"\n";
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Puntoventa"<<endl;
cout<<"//==> Archivo : BustosKevin-Puntoventa.cpp"<<endl;
cout<<"//==>Autor: Kevin Bustos"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
  return 0;
}
