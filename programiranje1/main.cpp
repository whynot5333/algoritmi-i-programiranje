#include <iostream>

using namespace std;

int main()
{
   char slovo1;
   char slovo2;
   int rezultat;

   printf("unesi prvo slovo: ");
   cin>>slovo1;

   printf("unesi drugo slovo: ");
   cin>>slovo2;
   rezultat=slovo1-slovo2;
   printf("Razmak izmedju brojeva %i", rezultat);
}
