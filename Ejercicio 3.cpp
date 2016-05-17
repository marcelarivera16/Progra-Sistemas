#include <iostream>

using namespace std;

int numero;
int main()

{
    cout << "Ingresar un numero ";
    cin>> numero;

    if (numero % 2==0){
        cout<<"El numero es par.";
    }

    else {
        cout<<"El numero es impar.";
    }

    cout<<"\n";

}
