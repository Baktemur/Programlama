#include <iostream>
#include <locale>
using namespace std;
  int main() {
 setlocale(LC_ALL,"TURKISH");
 int a,b;
 cout << "�r�n�n net fiyat� nedir ? ";
cin>>a;
cout<<"KDV KA� ?";
cin>>b;
cout<< "�r�n�n Sat�� Fiyat� : " << a+a*b/100;
return 0;
}
