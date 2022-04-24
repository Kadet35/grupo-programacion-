#include<iostrea>
using namespace std;
int main()
{

	float x,y;
	cout<<"Ingrese la x: "cin>>x;
	cout<<"Ingrese la y: "cin>>y;

	if(x==y){
		cout"El valor de x= "<<x<<"es igual a y= "<<y<<endl;
	}else{
		if(x==y){
			cout<<"El valor de x= "<<x<<"es menor a y= "<<y<<endl;
		}else{
			cout<<"El valor de y= "<<y<<"es menor a x= "<<x<<endl;
		}
	}
	return 0;
}

