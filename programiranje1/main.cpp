#include <iostream>

using namespace std;

int main()
{
    cout << "Unesi dva cijela broja" << endl;
    int broj1;
    int broj2;
    int rezultat;
    printf("Molimo unesi prvi broj:");
    cin>>broj1;
    printf("Hvala,molim unesi drugi broj:");
    cin>>broj2;
    rezultat=broj1+broj2;
    printf("%i + %i = %i, ", broj1,broj2,rezultat);
    rezultat=broj1-broj2;
    printf("%i - %i = %i, ", broj1,broj2,rezultat);
    rezultat=broj1*broj2;
    printf("%i * %i = %i, ", broj1,broj2,rezultat);
    rezultat=broj1/broj2;
    printf("%i / %i = %i, ", broj1,broj2,rezultat);





    return 0;
}
