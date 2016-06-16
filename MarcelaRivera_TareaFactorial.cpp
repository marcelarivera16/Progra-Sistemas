#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
const int tam=5;
int num[5];
int cont;

void ingresar(int num[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout<<"Ingresar numero: ";
        cin>>num[i];
    }
}

void presentar(int num[], int tam)
{
    cout<<"Calculo de factorial: "<<"\n";
    int i, total;
    for(i=0; i<tam; i++)
    {
        total = 1;
         while (num[i] > 0)
        {
            total = total * num[i];
            num[i] = num[i] - 1;
        }
        cout<<total<<"\n";
    }
}

int main()
{
    ingresar(num, tam);
    presentar(num, tam);
}

