#include <iostream>

using namespace std;

int cliente, cantprod, precio;
float subtotal;
int main()
{
    cout <<"Ingresar tipo de cliente(1-3): ";
    cin>>cliente;

    cout<<"Ingresar cantidad de producto: ";
    cin>>cantprod;

    cout<<"Ingresar precio: ";
    cin>>precio;


    if (cliente==1){
        subtotal=(cantprod*precio)-(cantprod*precio*0.07);
        cout<< "Subtotal es "<<subtotal<<"\n";
    }
    else if (cliente==2){
        subtotal=(cantprod*precio)-(cantprod*precio*0.08);
        cout<< "Subtotal es "<<subtotal<<"\n";
    }
    else if (cliente==3){
        subtotal=(cantprod*precio)-(cantprod*precio*0.1);
        cout<< "Subtotal es "<<subtotal<<"\n";
    }
    cout<<"\n";
}
