//================================================
////==> Nombre del programa: Cuentamoneda
////==> Archivo : Cuentamonedaedit.cpp
////==>Autor: Kevin Bustos
////==>Fecha de elaboración: 2022-05-20
////==>Fecha ultima actualización: 2022-05-120
////=================================================
#include<iostream>
using namespace std;
int main()
{
int kb_n,kb_c=0,kb_c1=0,kb_c2,kb_a,kb_a1,kb_a2,kb_x;
cout<<"cantidad de monedas a ingresar:"; 
cin>>kb_n; 
do{ 
cout<<"Ingrese el valor de la moneda (0.10,0.25): "; 
cin>>kb_x; 
kb_c=kb_c+1; 
kb_a=kb_a+kb_x; 
if(kb_x==(float)0.10){ 
kb_c1=kb_c1+1; 
kb_a1=kb_a1+kb_x; 
}else{ 
kb_c2=kb_c2+1; 
kb_a2=kb_a2+kb_x; 
} 
}while(kb_c<kb_n); 
cout<<"El resultado fue: "<<endl; 
cout<<"Cantidad de monedas ingresadas: "<<kb_c<<endl; 
cout<<"cantidad total en dinero contado:$ "<<kb_a<<endl; 
cout<<"cantidad monedas de 0.10ctv ingresadas: "<<kb_c1<<endl;
cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<kb_a1<<endl; 
cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<kb_c2<<endl; 
cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<kb_a2<<endl;
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuentamonedaedit"<<endl;
cout<<"//==> Archivo : Cuentamonedaedit.cpp"<<endl;
cout<<"//==>Autor: Kevin Bustos"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
return 0;
 }
