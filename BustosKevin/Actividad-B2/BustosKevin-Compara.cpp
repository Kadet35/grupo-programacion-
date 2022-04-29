#include<iostream>
using namespace std;
int main()
{
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
cout<<"el primero valor es mayor: \n"<<a;
}
else {cout<<"el mayor es el segundo valor: \n"<<b;}
}
return 0;
}
