#include <iostream>
#include <stdlib.h>

using namespace std;

int numero;
int main()
{

    cout<<"Ingresar día de la semana ";
    cin>>numero;

    if (numero==1){

        cout << "Lunes";
        }

    else if (numero==2){

        cout << "Martes";
        }

    else if (numero==3){

        cout << "Miércoles";
        }

    else if (numero==4){

        cout << "Jueves";
        }

    else if (numero==5){

        cout << "Viernes";
        }

    else if (numero==6){

        cout << "Sábado";
        }

    else if (numero=7) {

        cout << "Domingo";
        }

    else
        cout<<"Día incorrecto.";


    cout<<"\n";

}
