#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
const int tam=5;
int num[5];
int par=0, impar=0;

void ingreso(int num[], int tam)
{
    int i;
    srand(time(0));
    for(i=0; i<tam; i++)
    {
        num[i] = 1 + rand()%(100-1);
    }
}

int parImpar(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}

void presentar(int num[], int tam)
{
    int i;
    int resultado;

    for(i=0; i<tam; i++){
       resultado = parImpar(num[i]);
        if(resultado)
            {
            cout<<"Es par "<<num[i]<<"\n";
            par++;
            }
        else
            {
            cout<<"Es impar "<<num[i]<<"\n";
            impar++;
            }
    }
    cout<<"Numero de pares "<<par;
    cout<<"\n";
    cout<<"Numero de impares "<<impar;
}

int main()
{
    ingreso(num,tam);
    presentar(num,tam);
}
