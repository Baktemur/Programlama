#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");  //Bir fabrikada sabit maa�la �al��an i��iler aile durumlar�na ve �rettikleri par�a say�s�na g�re de ek maa� almaktad�r. A�a��da verilen y�nergelere g�re i��ilerin maa�lar�n� hesaplayan program
int maas,ailedurumu,parcasayisi;
maas =3000;
cout <<"Ka� ki�ilik bir aileniz var : ";cin>>ailedurumu;  //3 ki�ilik bir aile 50 TL fazla al�r,4 ki�ilik bir aile 100 tl fazla al�r 5 �zeri 200 TL fazla al�r.
cout <<"Bu g�n ka� par�a �rettiniz : ";cin>>parcasayisi;//0-101 par�a %5,100-200 par�a %10,200-300 par�a %15 fazla maa� al�r.
if(parcasayisi<=100&&ailedurumu<=3)
cout <<"maa��n�z : "<< (maas*5/100)+maas+50;
else if(parcasayisi<200&&ailedurumu<=4){
cout <<"maa��n�z : "<< (maas*10/100)+maas+100;	
}
else if(parcasayisi<300&&ailedurumu<=5){
cout <<"maa��n�z : "<< (maas*15/100)+maas+200;	
}
	
	return 0;
}
