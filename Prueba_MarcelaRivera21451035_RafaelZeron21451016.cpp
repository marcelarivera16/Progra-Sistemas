#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct empleado
{
    char nombre[50], zona[1];
    float horas, pn, pe, pt;
    float p1, p2;
};

empleado emple[5];
const int t=5;

void ingreso (empleado emple[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        cout<<"Nombre del empleado: ";
        cin.getline(emple[i].nombre,50);
        cout<<"Horas: ";
        cin>>emple[i].horas;

        do
    {
        cout<<"Zona de Trabajo (A, B, C): ";
        cin.getline(emple[i].zona,1);
    }while(!((emple[i].zona=='A') or (emple[i].zona=='B') or (emple[i].zona=='C')));
        _flushall();
    }
}

int pagonormal (char *zona)
{
    switch (*zona)
    {
    case 'A':
        return 100;
        break;
    case 'B':
        return 120;
        break;
    default:
        return 130;
        break;
    }
}

int pagoextra (char *zona)
{
    switch (*zona)
    {
    case 'A':
        return 120;
        break;
    case 'B':
        return 140;
        break;
    default:
        return 145;
        break;
    }
}

void calcular (empleado emple[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        emple[i].pn=pagonormal(emple[i].zona);
        emple[i].pe=pagoextra(emple[i].zona);
        if (emple[i].horas<=40)
        {
          emple[i].p1=emple[i].horas*emple[i].pn;
        }
        else
        {
            emple[i].p1=40*emple[i].pn;
            emple[i].horas=emple[i].horas-40;
            emple[i].p2=emple[i].horas*emple[i].pe;
        }
    emple[i].pt=emple[i].p1+emple[i].p2;

    }

}

void presentar (empleado emple[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        cout<<"Nombre del empleado: "<<emple[i].nombre<<"\n";
        cout<<"Pago Normal: "<<emple[i].p1<<"\n";
        cout<<"Pago Extra: "<<emple[i].p2<<"\n";
        cout<<"Pago Total: "<<emple[i].pt<<"\n";
    }
}

int main()
{
    ingreso(emple, t);
    calcular(emple, t);
    presentar(emple, t);
}
