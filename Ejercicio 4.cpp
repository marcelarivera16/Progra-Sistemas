#include <iostream>
#include <stdlib.h>

using namespace std;

int numero;
int main()
{

    cout<<"Ingresar d�a de la semana ";
    cin>>numero;

    if (numero==1){

        cout << "Lunes";
        }

    else if (numero==2){

        cout << "Martes";
        }

    else if (numero==3){

        cout << "Mi�rcoles";
        }

    else if (numero==4){

        cout << "Jueves";
        }

    else if (numero==5){

        cout << "Viernes";
        }

    else if (numero==6){

        cout << "S�bado";
        }

    else if (numero=7) {

        cout << "Domingo";
        }

    else
        cout<<"D�a incorrecto.";


    cout<<"\n";

}
