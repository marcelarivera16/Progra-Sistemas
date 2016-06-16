#include <iostream>

using namespace std;

int main()
{
    int numero;
    int total;
    int respuesta;
    do{
        total = 1;
        cout << "Ingrese un numero: " << endl;
        cin >> numero;

        while (numero > 0)
        {
            total = total * numero;
            numero = numero - 1;
        }

        cout << total << endl;

        cout << "Ingrese 0 si no desea continuar, de lo contrario ingrese cualquier digito: " << endl;
        cin >> respuesta;
    }while (respuesta != 0);

    cout << "Bye bye! :D" << endl;
    return 0;
}
