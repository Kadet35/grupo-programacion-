#include<iostream>
using namespace std;
int main()
{
	int C=0,a;
	float S=0,Z;
	cout<<"Ingrese cantidad de numeros a sumar: ";
	cin>>a;
	do{
		cout<<"Ingrese un numero: ";
		cin>>Z;
		C=C+1;
		S=S+Z;
	}while(C<a);
	cout<<"La suma total es: "<<S<<endl;
	return 0;
}
