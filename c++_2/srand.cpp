#include <iostream>
#include <stdlib.h> //rand fonksiyonu i�in
#include <time.h> //srand fonksiyonu i�in

using namespace std;


int main()
{



srand(time(0));

int x=rand() %10;
for(int x;x<10;x++)
cout<<x;


return 0;

}
