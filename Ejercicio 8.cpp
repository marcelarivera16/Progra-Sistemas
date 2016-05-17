#include <iostream>
#include <stdio.h>

using namespace std;

int n1, n2, n3;
float prom, suma;
int main()
{
    cout << "Ingresar primera nota: ";
    cin>>n1;

    cout << "Ingresar segunda nota: ";
    cin>>n2;

    cout << "Ingresar tercera nota: ";
    cin>>n3;

    if ((n1<n2) and (n1<n3)){
    suma=n2+n3;
    prom=(suma/2);
     cout<<"El promedio es "<<prom<<"\n";
    }

    else if ((n2<n1) and (n2<n3)){
    suma=n1+n3;
    prom=(suma/2);
     cout<<"El promedio es "<<prom<<"\n";
    }

    else if ((n3<n2) and (n3<n1)){
    suma=n1+n2;
    prom=(suma/2);
     cout<<"El promedio es "<<prom<<"\n";
    }

            cout<<"\n";

}
