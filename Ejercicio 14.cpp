#include <iostream>

using namespace std;

int resto, num, a, b,c ;
int main()
{
    cout << "Introduzca un numero de tres cifras: ";
    cin>>num;

    if ((num>99)&&(num<1000)){
        resto=num%10; //Se encuentra residuo: ultimo digito se vuelve el primero
        a=num/10; // Obtenemos cifra de dos digitos
        b=a%10; // ESe encuentra el residuo de la segunda cifra, la cual se convierte en segundo digito
        c=a/10; //Obtenemos numero de una cifra

    cout<<"Nuevo numero es "<<resto<<b<<c<<"\n";
    }
    else
    cout<<"Numero incorrecto.";

cout<<"\n";

}
