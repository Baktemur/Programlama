#include <iostream>
#include <locale>
using namespace std;
  int main() {
 setlocale(LC_ALL,"TURKISH");
 int a,b;
cout << "1.say�y� giriniz :";
cin>>a;
cout << "2.say�y� giriniz : ";
cin>>b;

if(a>0)
cout<<"1.say� pozitiftir : "<<a<<endl;
else
cout<<"1.say� negatiftir : "<<a<<endl;
 if(b>0)
 cout<<"2.say� pozitiftir : " << b << endl;
 else
 cout<<"2.say� negatiftir : "<< b;
  if(b=0) 
 	cout<<"n�tr";
 else
 
 
 
return 0;
}
