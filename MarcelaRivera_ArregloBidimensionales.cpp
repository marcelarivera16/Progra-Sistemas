#include <iostream>

using namespace std;
int num[4][3];
const int lin=5;
const int col=4;
void ingresar (int num[][3]) //solo se declaran las columnas
{
    int l, c;
    for(l=0; l<lin; l++)
    {
        for (c=0; c<col; c++)
        {
            cout<<"Dato ["<<l<<","<<c<<"]...:";
            cin>>num[l][c];
        }
    }
}

void presentar (int num[4][3])
{
    int l,c;
    for (l=0; l<lin; l++)
    {
        for (c=0; c<col; c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}

//ingresar linea en una funcion y nos da la suma de esa linea
int sumalin(int num[4][3], int lsuma)
{
    int suma=0,c;
    for (c=0; c<col; c++)
    {
        suma+=num[lsuma][c];
    }
    return suma;
}

int sumacol (int num[4][3], int csuma)
{
    int sumac=0, l;
    for (l=0; l<lin; l++)
    {
        sumac+=num[l][csuma];
    }
    return sumac;
}

int mayorcol (int num[4][3], int col)
{
    int l;
    int mayor=0;
        for (l=0; l<lin; l++)
    {
            if(mayor<num[l][col])
                mayor=num[l][col];
    }
    return mayor;
}

int main()
{
    int suma, sumac, mayor;
    ingresar (num);
    presentar (num);
    suma= sumalin(num,1);
    sumac=sumacol(num, 1);
    mayor=mayorcol(num,1);
    cout<<"Suma de la columna "<<sumac<<"\n";
    cout<<"Mayor de la columna "<<mayor<<"\n";
    cout<<"Suma de la linea "<<suma<<"\n";
}

