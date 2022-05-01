#include<iostream>
using namespace std;
int main()
{
int d,m,a,d1,m1,a1,d2,m2,a2;
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
cout<<"Usted tiene: "<<a2<<" años "<<m2<<"meses "<<"y "<<d2<<"dia "<<endl;
return 0;
}
