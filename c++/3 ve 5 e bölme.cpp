#include <iostream>
#include<locale>
using namespace std;
int main(){
setlocale(LC_ALL,"TURKISH");
	
  int sayi;
   cout<<"Say�y� Girin : ";
   cin>>sayi;
   if(sayi%3==0 && sayi%5==0)
   {
   	cout<<"Girilen say� 3' e ve 5'e tam b�l�n�yor.";
   }
   else
   {
   	cout<<"Girilen say� 3' e ve 5'e tam b�l�nm�yor.";
   }
	
	
	
	
	






	
	
	
	return 0;
}
