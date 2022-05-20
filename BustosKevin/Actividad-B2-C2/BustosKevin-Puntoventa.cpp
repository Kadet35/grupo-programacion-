#include <iostream>
using namespace std;
int main()
{
	int a, b, c, i, d, e, f, g;
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
	return 0;
}
