#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL,"Turkish");
   double deger;
   cout <<	"S�cakl�k De�eri Giriniz : ";cin>>deger;
   
   if(deger>=100)
   cout<<"Madde Gaz haldedir...";
   else if(deger<0){
   	cout<<"Madde Kat� haldedir...";
   }
    else if(deger<99&&deger>0)
    cout<<"Madde S�v� haldedir...";   
   return 0;
   }
