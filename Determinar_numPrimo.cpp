/*Leer un número entero > 10 y determinar si la suma de sus dígitos es un número primo. (identifiquen el número primo usando for)*/
#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0, x = 1, contador = 0;

    cout << "Ingrese un numero que contenga al menos 2 digitos.\n";
    cin >> n;


    if (n < 10) {
        cout << "Ingrese un numero valido, debe contener al menos 2 digitos.\n";
        cin >> n;
    }
    else if (n >= 10) {
        cout << "Veamos si la suma de los digitos del numero " << n << " da como resultado un numero primo.\n";
        while (n > 0) {
            suma = suma + n % 10;
            n = n / 10;
        }
        cout << "La suma es: " << suma<<endl;

        while (x <= suma) {
            if (suma%x == 0) {
                contador++;
            }
            x++;
        }if (contador == 2) {
            cout << "El numero "<< suma <<" es primo\n";
        }
        else {
            cout << "El numero " << suma << " no es primo\n";
        }

        return 0;
    }
}