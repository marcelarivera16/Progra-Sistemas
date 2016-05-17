#include <iostream>

using namespace std;

int num, digito, cont=0;
float prom=0, suma=0;
int main()
{
    cout << "Ingrese un numero: ";
    cin>>num;

    while(num>0)
    {
        digito=num%10;
        suma=suma+digito;
        cont++;
        prom=suma/cont;
        num=num/10;

    }
    cout<<"La suma es "<<suma<<"\n";
    cout<<"El promedio es "<<prom;

}
