#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, b, h, r, s, hp, su, m, d, res, q, t, n1, n2, t1, i, y, cont, pro, z, ta, o, e, f, g,kb_n,kb_c,kb_c1,kb_c2, kb_i,kb_d,kb_e,kb_f,kb_g;
	int c=0,c1=0,c2=0,kb_m,kb_d1,kb_m1,kb_d2,kb_m2;
	float x,a=0,a1=0,a2=0,kb_x,kb_a=0,kb_a1=0,kb_a2=0;
	cont=0;
	do{
		cout<< "TRABAJO GRUPAL\n";
	cout<< "BUSTOS KEVIN = 1\n";
	cout<< "MANZABA ERICK = 2 \n";
	cout<< "ANGULO JAMILETH = 3\n";
	cout<< "LIMPIAR PANTALLA = 4 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
			do{
		cout<< "GRUPO PROGRAMACION B2-C2\n";
	cout<< "ACTIVIAD B2 = 1\n";
	cout<< "ACTIVIAD C2 = 2 \n";
	cout<< "LIMPIAR PANTALLA = 3 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1:
do{
				
		cout<< "GRUPO PROGRAMACION B2 KEVIN BUSTOS\n";
	cout<< "COMPARAR B2 = 1\n";
	cout<< "CUENTAMONEDA B2 = 2 \n";
	cout<< "PUNTOVENTA  B2 = 3\n";
	cout<< "SUMA B2 = 4\n";
	cout<< "EDAD B2 = 5\n";
	cout<< "LIMPIAR PANTALLA = 6 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		float a, b; 
cout<<"ingrese primer valor: \n";
cin>>a; 
cout<<"ingrese segundo valor: \n";
cin>>b;
if(a==b)
{
cout<<"los valores son iguales: \n"<<a;
}
else
{
if(a>b)
{
cout<<"el primero valor es mayor: \t"<<a;
cout<<"\n";	
}
else {cout<<"el mayor es el segundo valor: \t"<<b;
cout<<"\n";	}
}
			break;
		case 2: 
	cout<<"cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>x;
		c=c+1;
		a=a+x;
	if(x==(float)0.10){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<c1<<endl;
        cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<a2<<endl;
		break;
		case 3: 	
		cout<< "ingrese cuantos productos son: \n";
	cin>>a;
	for(i=1; i<=a; i++)
	{
		cout<< "ingre precio del producto "<<i<<"\n";
		cin>>b;
		c=c+b;
	}
	cout<< "el valor bruto es: "<<c<<"\n";
	d=c*0.15;
	cout<< "el valor del iva es: "<<d<<"\n";
	e=c+d;
	cout<< "el valor bruto mas el iva es: "<<e<<"\n";
	f=e*0.10;
	cout<< "se le aplico un descuento de 10% a su compra: "<<f<<"\n";
	g=e-f;
	cout<< "el valor total a pagar es: "<<g<<"\n";
		break;
		case 4:
		c=c=0;
cout<<"ingres cuantos numeros quiere sumar: \n";
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"ingre valor:";
cin>>b;
c=c+b;
}
cout<<"la suma total es: "<<c;   	
		break;
		case 5:  
		int d1,m1,a1,d2,m2,a2;
cout<<"ingrese fecha actual:  dia mes año";
cin>>d>>m>>a;
cout<<"ingre su fecha de nacimiento: dia mes año";
cin>>d1>>m1>>a1;
if(d<d1)
{ d=d+30;
  m=m-1;
  d2=d-d1;
}
else{ d2=d-d1;}
if(m<m1) {
m=m+12;
a=a-1;
m2=m-m1;
}
else{ m2=m-m1; }
a2=a-a1;
cout<<"Usted tiene: "<<a2<<" años "<<m2<<"meses "<<"y "<<d2<<"dia "<<endl;
return 0;	
		break;
		case 6:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";
	 return 0;
          	break;
		case 2: 
	do{
				
		cout<< "GRUPO PROGRAMACION C2 KEVIN BUSTOS\n";
	cout<< "COMPARAR C2 = 1\n";
	cout<< "CUENTAMONEDA C2 = 2 \n";
	cout<< "PUNTOVENTA C2= 3\n";
	cout<< "SUMA C2 = 4\n";
	cout<< "EDAD C2 = 5\n";
	cout<< "LIMPIAR PANTALLA  = 6 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
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
			break;
		case 2: 
	cout<<"cantidad de monedas a ingresar: ";
	cin>>kb_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>kb_x;
		kb_c=kb_c+1;
		a=a+x;
	if(kb_x==(float)0.10){
		kb_c1=kb_c1+1;
		kb_a1=kb_a1+kb_x;
	}else{
		kb_c2=kb_c2+1;
		kb_a2=kb_a2+kb_x;
	}
	}while(kb_c<kb_n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<kb_c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<kb_a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<kb_c1<<endl;
        cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<kb_a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<kb_c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<kb_a2<<endl;
		break;
		case 3: 	
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
		break;
		case 4:
		   	cout<<"ingres cuantos numeros quiere sumar: \n";
cin>>kb_a;
for(kb_i=1;kb_i<=kb_a;kb_i++)
{
cout<<"ingre valor:";
cin>>kb_b;
kb_c=kb_c+kb_b;
}
cout<<"la suma total es: "<<kb_c;
		break;
		case 5:  
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
		break;
		case 6:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";

		break;
		case 3:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";
			break;
		    case 2: 
			do{
		cout<< "GRUPO PROGRAMACION B2-C2\n";
	cout<< "ACTIVIAD B2 = 1\n";
	cout<< "ACTIVIAD C2 = 2 \n";
	cout<< "LIMPIAR PANTALLA = 3 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1:
do{
				
		cout<< "GRUPO PROGRAMACION B2 MANZABA ERICK\n";
	cout<< "COMPARAR = 1\n";
	cout<< "CUENTAMONEDA = 2 \n";
	cout<< "PUNTOVENTA = 3\n";
	cout<< "SUMA = 4\n";
	cout<< "EDAD = 5\n";
	cout<< "LIMPIAR PANTALLA = 6 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		float a, b; 
cout<<"ingrese primer valor: \n";
cin>>a; 
cout<<"ingrese segundo valor: \n";
cin>>b;
if(a==b)
{
cout<<"los valores son iguales: \n"<<a;
}
else
{
if(a>b)
{
cout<<"el primero valor es mayor: \t"<<a;
cout<<"\n";	
}
else {cout<<"el mayor es el segundo valor: \t"<<b;
cout<<"\n";	}
}
			break;
		case 2: 
	cout<<"cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>x;
		c=c+1;
		a=a+x;
	if(x==(float)0.10){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<c1<<endl;
        cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<a2<<endl;
		break;
		case 3: 	
		cout<< "ingrese cuantos productos son: \n";
	cin>>a;
	for(i=1; i<=a; i++)
	{
		cout<< "ingre precio del producto "<<i<<"\n";
		cin>>b;
		c=c+b;
	}
	cout<< "el valor bruto es: "<<c<<"\n";
	d=c*0.15;
	cout<< "el valor del iva es: "<<d<<"\n";
	e=c+d;
	cout<< "el valor bruto mas el iva es: "<<e<<"\n";
	f=e*0.10;
	cout<< "se le aplico un descuento de 10% a su compra: "<<f<<"\n";
	g=e-f;
	cout<< "el valor total a pagar es: "<<g<<"\n";
		break;
		case 4:
		c=c=0;
cout<<"ingres cuantos numeros quiere sumar: \n";
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"ingre valor:";
cin>>b;
c=c+b;
}
cout<<"la suma total es: "<<c;   	
		break;
		case 5:  
		int d1,m1,a1,d2,m2,a2;
cout<<"ingrese fecha actual:  dia mes año";
cin>>d>>m>>a;
cout<<"ingre su fecha de nacimiento: dia mes año";
cin>>d1>>m1>>a1;
if(d<d1)
{ d=d+30;
  m=m-1;
  d2=d-d1;
}
else{ d2=d-d1;}
if(m<m1) {
m=m+12;
a=a-1;
m2=m-m1;
}
else{ m2=m-m1; }
a2=a-a1;
cout<<"Usted tiene: "<<a2<<" años "<<m2<<"meses "<<"y "<<d2<<"dia "<<endl;
return 0;	
		break;
		case 6:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";
	 return 0;
          	break;
		case 2: 
		do{
				
		cout<< "GRUPO PROGRAMACION C2 MANZABA ERICK\n";
	cout<< "COMPARAR C2 = 1\n";
	cout<< "CUENTAMONEDA C2 = 2 \n";
	cout<< "PUNTOVENTA C2 = 3\n";
	cout<< "SUMA C2 = 4\n";
	cout<< "EDAD C2 = 5\n";
	cout<< "LIMPIAR PANTALLA = 6 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		float em_al, em_bl; 
cout<<"ingrese primer valor: \n";
cin>>em_al; 
cout<<"ingrese segundo valor: \n";
cin>>b;
if(em_al==em_bl)
{
cout<<"los valores son iguales: \n"<<em_al;
}
else
{
if(em_al>em_bl)
{
cout<<"el primero valor es mayor: \t"<<em_al;
cout<<"\n";	
}
else {cout<<"el mayor es el segundo valor: \t"<<em_bl;
cout<<"\n";	}
}
			break;
		case 2: 
	cout<<"cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>x;
		c=c+1;
		a=a+x;
	if(x==(float)0.10){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<c1<<endl;
        cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<a2<<endl;
		break;
		case 3: 	
		cout<< "ingrese cuantos productos son: \n";
	cin>>a;
	for(i=1; i<=a; i++)
	{
		cout<< "ingre precio del producto "<<i<<"\n";
		cin>>b;
		c=c+b;
	}
	cout<< "el valor bruto es: "<<c<<"\n";
	d=c*0.15;
	cout<< "el valor del iva es: "<<d<<"\n";
	e=c+d;
	cout<< "el valor bruto mas el iva es: "<<e<<"\n";
	f=e*0.10;
	cout<< "se le aplico un descuento de 10% a su compra: "<<f<<"\n";
	g=e-f;
	cout<< "el valor total a pagar es: "<<g<<"\n";
		break;
		case 4:
		c=c=0;
cout<<"ingres cuantos numeros quiere sumar: \n";
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"ingre valor:";
cin>>b;
c=c+b;
}
cout<<"la suma total es: "<<c;   	
		break;
		case 5:  
		int d1,m1,a1,d2,m2,a2;
cout<<"ingrese fecha actual:  dia mes año";
cin>>d>>m>>a;
cout<<"ingre su fecha de nacimiento: dia mes año";
cin>>d1>>m1>>a1;
if(d<d1)
{ d=d+30;
  m=m-1;
  d2=d-d1;
}
else{ d2=d-d1;}
if(m<m1) {
m=m+12;
a=a-1;
m2=m-m1;
}
else{ m2=m-m1; }
a2=a-a1;
cout<<"Usted tiene: "<<a2<<" años "<<m2<<"meses "<<"y "<<d2<<"dia "<<endl;
return 0;	
		break;
		case 6:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";
	 return 0;
          	break;
		
		break;
		case 3:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";	
			break;
		
		case 3: 
		do{
		cout<< "GRUPO PROGRAMACION B2-C2\n";
	cout<< "ACTIVIAD B2 = 1\n";
	cout<< "ACTIVIAD C2 = 2 \n";
	cout<< "LIMPIAR PANTALLA = 3 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1:
do{
				
		cout<< "GRUPO PROGRAMACION B2 ANGULO JAMILETH\n";
	cout<< "COMPARAR = 1\n";
	cout<< "CUENTAMONEDA = 2 \n";
	cout<< "PUNTOVENTA = 3\n";
	cout<< "SUMA = 4\n";
	cout<< "EDAD = 5\n";
	cout<< "LIMPIAR PANTALLA = 6 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		float a, b; 
cout<<"ingrese primer valor: \n";
cin>>a; 
cout<<"ingrese segundo valor: \n";
cin>>b;
if(a==b)
{
cout<<"los valores son iguales: \n"<<a;
}
else
{
if(a>b)
{
cout<<"el primero valor es mayor: \t"<<a;
cout<<"\n";	
}
else {cout<<"el mayor es el segundo valor: \t"<<b;
cout<<"\n";	}
}
			break;
		case 2: 
	cout<<"cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>x;
		c=c+1;
		a=a+x;
	if(x==(float)0.10){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<c1<<endl;
        cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<a2<<endl;
		break;
		case 3: 	
		cout<< "ingrese cuantos productos son: \n";
	cin>>a;
	for(i=1; i<=a; i++)
	{
		cout<< "ingre precio del producto "<<i<<"\n";
		cin>>b;
		c=c+b;
	}
	cout<< "el valor bruto es: "<<c<<"\n";
	d=c*0.15;
	cout<< "el valor del iva es: "<<d<<"\n";
	e=c+d;
	cout<< "el valor bruto mas el iva es: "<<e<<"\n";
	f=e*0.10;
	cout<< "se le aplico un descuento de 10% a su compra: "<<f<<"\n";
	g=e-f;
	cout<< "el valor total a pagar es: "<<g<<"\n";
		break;
		case 4:
		c=c=0;
cout<<"ingres cuantos numeros quiere sumar: \n";
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"ingre valor:";
cin>>b;
c=c+b;
}
cout<<"la suma total es: "<<c;   	
		break;
		case 5:  
		int d1,m1,a1,d2,m2,a2;
cout<<"ingrese fecha actual:  dia mes año";
cin>>d>>m>>a;
cout<<"ingre su fecha de nacimiento: dia mes año";
cin>>d1>>m1>>a1;
if(d<d1)
{ d=d+30;
  m=m-1;
  d2=d-d1;
}
else{ d2=d-d1;}
if(m<m1) {
m=m+12;
a=a-1;
m2=m-m1;
}
else{ m2=m-m1; }
a2=a-a1;
cout<<"Usted tiene: "<<a2<<" años "<<m2<<"meses "<<"y "<<d2<<"dia "<<endl;
return 0;	
		break;
		case 6:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";
	 return 0;
          	break;
		case 2: 
		do{
				
		cout<< "GRUPO PROGRAMACION C2 ANGULO JAMILETH\n";
	cout<< "COMPARAR C2 = 1\n";
	cout<< "CUENTAMONEDA C2 = 2 \n";
	cout<< "PUNTOVENTA C2 = 3\n";
	cout<< "SUMA C2 = 4\n";
	cout<< "EDAD C2 = 5\n";
	cout<< "LIMPIAR PANTALLA = 6 \n";
	cout<< "CERO PARA SALIR \n";
	cout<< "***INGRES UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		float a, b; 
cout<<"ingrese primer valor: \n";
cin>>a; 
cout<<"ingrese segundo valor: \n";
cin>>b;
if(a==b)
{
cout<<"los valores son iguales: \n"<<a;
}
else
{
if(a>b)
{
cout<<"el primero valor es mayor: \t"<<a;
cout<<"\n";	
}
else {cout<<"el mayor es el segundo valor: \t"<<b;
cout<<"\n";	}
}
			break;
		case 2: 
	cout<<"cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10,0.25): ";
		cin>>x;
		c=c+1;
		a=a+x;
	if(x==(float)0.10){
		c1=c1+1;
		a1=a1+x;
	}else{
		c2=c2+1;
		a2=a2+x;
	}
	}while(c<n);
	cout<<"El resultado fue: "<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"cantidad total en dinero contado:$ "<<a<<endl;
	cout<<"cantidad monedas de 0.10ctv ingresadas: "<<c1<<endl;
        cout<<"cantidad total en dinero de monedas 0.10ctvs:$ "<<a1<<endl;
	cout<<"cantidad de monedas de 0.25ctv ingresadas: "<<c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25ctv:$ "<<a2<<endl;
		break;
		case 3: 	
		cout<< "ingrese cuantos productos son: \n";
	cin>>a;
	for(i=1; i<=a; i++)
	{
		cout<< "ingre precio del producto "<<i<<"\n";
		cin>>b;
		c=c+b;
	}
	cout<< "el valor bruto es: "<<c<<"\n";
	d=c*0.15;
	cout<< "el valor del iva es: "<<d<<"\n";
	e=c+d;
	cout<< "el valor bruto mas el iva es: "<<e<<"\n";
	f=e*0.10;
	cout<< "se le aplico un descuento de 10% a su compra: "<<f<<"\n";
	g=e-f;
	cout<< "el valor total a pagar es: "<<g<<"\n";
		break;
		case 4:
		c=c=0;
cout<<"ingres cuantos numeros quiere sumar: \n";
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"ingre valor:";
cin>>b;
c=c+b;
}
cout<<"la suma total es: "<<c;   	
		break;
		case 5:  
		int d1,m1,a1,d2,m2,a2;
cout<<"ingrese fecha actual:  dia mes año";
cin>>d>>m>>a;
cout<<"ingre su fecha de nacimiento: dia mes año";
cin>>d1>>m1>>a1;
if(d<d1)
{ d=d+30;
  m=m-1;
  d2=d-d1;
}
else{ d2=d-d1;}
if(m<m1) {
m=m+12;
a=a-1;
m2=m-m1;
}
else{ m2=m-m1; }
a2=a-a1;
cout<<"Usted tiene: "<<a2<<" años "<<m2<<"meses "<<"y "<<d2<<"dia "<<endl;
return 0;	
		break;
		case 6:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";
	 return 0;
          	break;
		
			
		break;
		case 3:   	cout<<"LIMPIAR PANTALLA"; system("cls");
		break;
		default: cout<<"OPCION INCORRECTA LEE BIEN Y VUELVE A INTENTARLO QUE SI PUEDES\n"; break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO";	
	      break;
	}
	}
	while(n!=0);
	 cout<<"YA PUES CHAO"; 
	return 0;
}
