#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre [30];
    int p1, p2, promedio;
    char obs [15];
};

const int t=5;
alumno alum[5];

void ingreso (alumno alum[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        cout<<"Nombre del alumno: ";
        cin.getline(alum [i].nombre,30);
        cout<<"Parcial #1: ";
        cin>>alum[i].p1;
        cout<<"Parcial #2: ";
        cin>>alum[i].p2;
        _flushall();
    }
}

void calcular (alumno alum[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        alum[i].promedio=(alum[i].p1 + alum[i].p2)/2;
        if (alum[i].promedio>60)
        {
            strcpy(alum[i].obs, "Aprobado");
        }
        else
        {
            strcpy(alum[i].obs, "Reprobado");
        }
    }
}

void presentar (alumno alum[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        cout<<"Nombre del alumno: "<<alum[i].nombre<<"\n";
        cout<<"Promedio: "<<alum[i].promedio<<"\n";
        cout<<"Observacion: "<<alum[i].obs<<"\n\n";
    }
}

void ordenar (alumno alum[], int t)
{
    int k, i,c=0;
    alumno alumx, temp;
    for (i=0; i<t; i++)
    {
        c++;
        for (k=0; k<t-c; k++)
        {
            if (alum[k].nombre[0]>alum[k+1].nombre[0])
            {
                temp=alum[k];
                alum[k]=alum[k+1];
                alum[k+1]=temp;
            }
        }
    }
}

void ordenar2 (alumno alum[], int t)
{
    int k, i,c=0;
    alumno alumx, temp;
    for (i=0; i<t; i++)
    {
        c++;
        for (k=0; k<t-c; k++)
        {
            if (alum[k].promedio<alum[k+1].promedio)
            {
                temp=alum[k];
                alum[k]=alum[k+1];
                alum[k+1]=temp;
            }
        }
    }
}

int main()
{
    ingreso (alum, t);
    calcular (alum, t);
    ordenar (alum, t);
    presentar (alum, t);
    ordenar2 (alum, t);
    presentar (alum, t);
}
