#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
const int tam=10;
int num[10];
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

int primo(int num)
{
    int i, a=0;
    int xnum;
    xnum = num;
    for(i=1; i<(xnum+1); i++)
    {
        if(xnum%i==0)
             a++;
    }
    return a;
}

void presentar(int num[], int tam)
{
    cout<<"Los numeros primos fueron: "<<"\n";
    int i, p;
    for(i=0; i<tam; i++)
    {
        p = primo(num[i]);
        if (p==2){
        cont++;
        cout<<num[i]<<"\n";
        }
    }
    cout<<"La cantidad de numeros primos es "<<cont;
}

int main()
{
    ingresar(num, tam);
    presentar(num, tam);
}
