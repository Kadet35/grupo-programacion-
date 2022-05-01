#include<iostream>
using namespace std;
int main()
{
int a,b,c,i;
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
return 0;
}

