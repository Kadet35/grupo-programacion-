#include<iostrea>
using namespace std;
int main()
{

	float x,c=0,a=0,n,vb,iva,des,viva,vdes,vf;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>n;
	cout<<"Ingrese el iva: ";
	cin>>iva;
	cout<<"Ingrese el descuento: ";
	cin>>des;
	do{
		cout<<"Ingrese el numero: ";
		cin>>x;
		c=c+1;
		a=a+x;
	}while(c<n);
	vb=a;
	viva=vb*iva;
	vdes=vb*des;
	vf=vb+iva-vdes;
	cout<<"El valor final a pagar es: ";
	cout<<vf<<endl;
}

