#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	double urunnet,karyuzdesi,kdv,kar,vergi,satis;
	cout<< "�r�n�n al�� fiyat� nedir?";cin>>urunnet;
	cout<<"�r�nden y�zde ka� kar ediliyor?";cin>>karyuzdesi;
	cout<<"KDV y�zde ka�t�r?";cin>>kdv;
	kar = urunnet*karyuzdesi/100;
	cout<< "�r�n�n karl� fiyat� : " << urunnet+kar<<endl;
	vergi = urunnet+kar*kdv/100;
	cout<<"�r�n�n vergili fiyat� :  "<< vergi+kar<<endl;
	satis =kar+vergi;
	cout << "�r�n�n sat�� fiyat� : " << satis<<endl;
	

	return 0;
}
