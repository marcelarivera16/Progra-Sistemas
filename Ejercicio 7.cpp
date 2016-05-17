#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//ingresar tres numeros y escribir el numero mayor
int n1,n2,n3;

int main()
{
    cout <<"Ingresar numero 1: ";
    cin>>n1;
    cout <<"Ingresar numero 2: ";
    cin>>n2;
    cout <<"Ingresar numero 3: ";
    cin>>n3;

    if((n1>n2)and(n1>n3)){
        cout<<"Numero mayor es "<<n1;
    }
    else if(n2>n3){
        cout<<"Numero mayor es "<<n2;
    }
    else{
        cout<<"Numero mayor es "<<n3;
    }
    cout<<"\n";



}
