//================================================
////==> Nombre del programa: leaedad
////==> Archivo : BustosKevin-leaedad.cpp
////==>Autor: Kevin Bustos
////==>Fecha de elaboración: 2022-05-20
////==>Fecha ultima actualización: 2022-05-120
////=================================================
//
#include<iostream>
using namespace std;
int main()
{
int kb_d,kb_m,kb_a,kb_d1,kb_m1,kb_a1,kb_d2,kb_m2,kb_a2;
cout<<"ingrese fecha actual:  dia mes año";
cin>>kb_d>>kb_m>>kb_a;
cout<<"ingre su fecha de nacimiento: dia mes año";
cin>>kb_d1>>kb_m1>>kb_a1;
if(kb_d<kb_d1)
{ kb_d=kb_d+30;
kb_m=kb_m-1;
kb_d2=kb_d-kb_d1;
   }
   else{ kb_d2=kb_d-kb_d1;}
   if(kb_m<kb_m1) {
    kb_m=kb_m+12;
    kb_a=kb_a-1;
   kb_m2=kb_m-kb_m1;
   }
    else{ kb_m2=kb_m-kb_m1; }
    kb_a2=kb_a-kb_a1;
    cout<<"Usted tiene: "<<kb_a2<<" años "<<kb_m2<<"meses "<<"y "<<kb_d2<<"dia "<<endl;
   cout<<endl<<"//================================================"<<endl;
   cout<<"//==> Nombre del programa: leaedad"<<endl;
   cout<<"//==> Archivo : BustosKevin-leaedad.cpp"<<endl;
   cout<<"//==>Autor: Kevin Bustos"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-05-20"<<endl;
   cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
  cout<<"//================================================="<<endl;
     return 0;
    }
