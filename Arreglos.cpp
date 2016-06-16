#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;
const int tam=5;
int cpar, cimpar;

int num[5];
void ingreso (int num[], int tam)
{
    int i;
    srand(time(0));
    for (i=0; i<tam; i++)
    {
        num[i] = 1 + rand() % (100-1);
    }
}

int contarcifras(int num)
{
    int xnum, cifras=1;
    xnum=num;
    while (xnum>10)
    {
       xnum=num/10;
       cifras++;
    }
    return cifras;
}
void presentar (int num[], int tam)
{
    int i, xcifras;
    for (i=0; i<tam; i++)
    {
        xcifras=contarcifras(num[i]);
        cout<<"Ingresar pos["<<i<<"]...:"<<num[i];
        cout<<" cifras "<<xcifras<<"\n";
    }
}

void ParImpar (int num[], int tam, int &cpar, int &cimpar) //& = para que sea de entrada y salida
{
    int i;
    cpar=0;
    cimpar=0;
    for (i=0; i<tam; i++)
    {
        if (num[i]%2==0)
            cpar++;
        else
            cimpar++;
    }
}

int main()
{
    ingreso (num,tam);
    presentar (num,tam);
    ParImpar (num, tam, cpar, cimpar);
    cout<<"Pares "<<cpar<<" Impares "<<cimpar<<"\n";
}

