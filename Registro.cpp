#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct empleado
{
    char nombre[50];
    float ventas, comision, pc;
    int turno;
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
        cout<<"Ventas: ";
        cin>>emple[i].ventas;

        do
    {
        cout<<"Turno (1, 2, 3): ";
        cin>>emple[i].turno;
    }while((emple[i].turno!=1) and (emple[i].turno!=2) and (emple[i].turno!=3));
        _flushall();
    }
}

float porcomision (int turno)
{
    switch (turno)
    {
    case 1:
        return 0.05;
        break;
    case 2:
        return 0.04;
        break;
    default:
        return 0.03;
        break;
    }
}


void calcular (empleado emple[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        emple[i].pc=porcomision(emple[i].turno);
        emple[i].comision=emple[i].ventas*emple[i].pc;
    }

}

void presentar (empleado emple[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        cout<<"Nombre del empleado: "<<emple[i].nombre<<"\n";
        cout<<"Porcentaje de comision: "<<emple[i].pc<<"\n";
        cout<<"Comision: "<<emple[i].comision<<"\n\n";
    }
}

int main()
{
    ingreso(emple, t);
    calcular(emple, t);
    presentar(emple, t);
}
