#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;
 
 
 
int main()
{ 
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
	double s,n;
	cout<<"n : "; 
	cin>>n;
	for(s=1; s<=n; s++)
	cout<<"sayi="<<s<<"\t karesi="<<pow(s, 2)<<endl;
}
