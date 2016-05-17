#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

char caracter;
int main()
{

    cout<<"Ingresar un caracter del teclado: ";
    cin>>caracter;

    switch(caracter)
    {
        case 'a': case 'A':
        case 'e': case 'B':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
        cout << "Es una vocal.";
        break;


    default:
        cout<<"No es una vocal.";
        break;
    }

    cout<<"\n";


}
