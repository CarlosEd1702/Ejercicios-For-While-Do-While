/*Generar la serie de Fibonacci hasta llegar al 1000.  (1, 1, 2, 3, 5, 8, 13, 21, 34 ... 1000
Chequen la lógica de la secuencia para obtenerlo con un ciclo for).*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n = 14, x = 0, y = 1, z = 1;

    cout << "Serie de Fibonacci hasta el ultimo numero mas cercano a 1000.\n";
    cout << "\n";
    cout << "1 ";

    for (int i = 0; i <= n; i++) {
        z = x + y;
       
        cout << z << " ";
        x = y;
        y = z;
    }
    cout << "\n";
    system("pause");
    return 0;
}
