#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
main(){
	
	setlocale(LC_ALL,"Turkish");
int top,ort,vize,final;

cout<< "vize notunuzu giriniz : "; cin >> vize;
cout<< "final notunuzu giriniz : "; cin>> final;

top=vize+final;
ort=top/2;
cout<< "ortalama : " << ort << endl;

if(ort<40)
{
	cout << "FF Kald�n�z";
}
else if(ort<50){
	cout << "FD Kald�n�z";
}
else if(ort<55)
{
	cout << "DD Sorumlu Ge�tiniz";
}
else if(ort<60)
{
	cout << "DC Sorumlu Ge�tiniz";
}
else if(ort<65)
{
	cout << "CC Ge�tiniz";
}
else if(ort<70)
{
	cout << "CB Ge�tiniz";
}
else if(ort<80)
{
	cout << "CC Ge�tiniz";
}
else if(ort<90)
{
	cout << "BA Ge�tiniz";
}
else if(ort<100)
{
	cout << "AA Ge�tiniz";
}







}




















































	
	
	

