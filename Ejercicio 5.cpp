#include <iostream>

using namespace std;
/*
Ingresar la nota acumulada y examen del
alumno y presentar la nota final
*/

int acumulado, examen, notafinal;

int main()
{
    cout << "Ingresar acumulado ";
    cin>>acumulado;

    cout<<"Ingresar nota examen ";
    cin>>examen;

    notafinal= acumulado+examen;


    if ((notafinal>=57) and (notafinal<=59))
    {
        cout<<"Nota final es 60.";
    }
    else
    {
        cout<<"Nota final es "<<notafinal<<"\n";
    }
    cout<<"\n";
    }

