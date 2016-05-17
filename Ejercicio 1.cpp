#include <iostream>
#include <stdlib.h>

using namespace std;

// Ingresar numero y determinar si es positivo, negativo o cero.


int numero;

int main()
{
    cout <<"Ingresar un numero ";
    cin>> numero;

    if (numero>0)
    {
        cout<<"Es Positivo";
    }
    else if (numero<0)
    {
        cout<<"Es Negativo";
    }
    else
    {
        cout<<"Es cero";
    }

    cout<<"\n";
    system("PAUSE");
}
