#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
int taban,yukseklik,alan;
cout << "��genin taban uzunlu�u ka�t�r?";cin>> taban;
cout << "��genin y�ksekli�i ka�t�r : ";cin>> yukseklik;
alan = (taban*yukseklik)/2;
cout<< "��genin Alan� : " << alan << "d�r";
	

	return 0;
}
