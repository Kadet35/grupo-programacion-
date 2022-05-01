#include<iostream>
using namespace std;
int main()
{

	float x,y;
	cout<<"Ingrese el primer numero: ";
	cin>>x;
	cout<<"Ingrese el segundo numero: ";
	cin>>y;

	if(x==y){
		cout<<"El primer numero= "<<x<<"es igual al segundo numero= "<<y<<endl;
	}else{
		if(x==y){
			cout<<"El primero numero= "<<x<<"es menor al segundo numero= "<<y<<endl;
		}else{
			cout<<"El segundo numero= "<<y<<"es menor al primer nuemro= "<<x<<endl;
		}
	}
	return  0;
}

