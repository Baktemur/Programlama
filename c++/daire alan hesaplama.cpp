#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
double r,pi,alan,yaricap;
cout << "Dairenin yar��ap uzunlu�u ka�t�r?";cin>> r; // pi yi 3 al�n�z..
pi =3;
yaricap =r*r;
alan = pi*(yaricap);
cout<< "Dairenin Alan� : " << alan << "d�r";
	return 0;
}
