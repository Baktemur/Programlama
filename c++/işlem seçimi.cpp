#include <iostream>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL,"TURKISH");
int islem;

cout<< "i�lemi giriniz :";
cin >> islem;
 switch(islem){
 	
 	case 1:
 	cout << "1. ��lemi se�tiniz...";
 	break;
 	case 2:
 		cout << "2. ��lemi se�tiniz...";
 	break;
 	case 3:
 		cout << "3. ��lemi se�tiniz...";
 	break;
 	case 4:
 		cout << "4. ��lemi se�tiniz...";
 	break;
 	default:
 		cout << "Ge�ersiz i�lem ..!";
 	break;
 }
 
return 0;
}

