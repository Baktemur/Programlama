#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
int kisakenar,uzunkenar,alan;
cout << "Dikd�rtgenin k�sa kenar uzunlu�u ka�t�r?";cin>> kisakenar;
cout << "Dikt�rdgenin uzun kenar uzunlu�u ka�t�r ? ";cin>> uzunkenar;
alan = kisakenar*uzunkenar;
cout<< "Dikd�tgenin Alan� : " << alan << "d�r";
	

	return 0;
}
