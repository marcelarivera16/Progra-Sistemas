#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int n1,n2,n3, orden;

int main()
{
    cout <<"Ingresar numero 1: ";
    cin>>n1;
    cout <<"Ingresar numero 2: ";
    cin>>n2;
    cout <<"Ingresar numero 3: ";
    cin>>n3;

    if (n1<n2){
        orden=n1;
        n1=n2;
        n2=orden;
    }

    if (n1<n3){
        orden=n1;
        n1=n3;
        n3=orden;
    }

    if (n2<n3){
        orden=n2;
        n2=n3;
        n3=orden;
    }
    cout<<"El orden es: ""\n";
    cout<<n1<<"\n";
    cout<<n2<<"\n";
    cout<<n3<<"\n";
}
