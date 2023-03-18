/*#include <iostream>
 //para calcular factorial
using namespace std;

int main() {
    int num, factorial = 1;

    cout << "Ingresa un numero: ";
    cin >> num;

    if (num < 0) {
        cout << "Lo siento, el factorial no está definido para números negativos." << endl;
    } else if (num == 0) {
        cout << "El factorial de 0 es 1." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        cout << "El factorial de " << num << " es: " << factorial << endl;
    }

    return 0;
}
 */
/*#include <iostream>
 //serie Fibonacci
using namespace std;

int main()
{
    int num1 = 0, num2 = 1, num3, i, n = 10;
    cout << num1 << " " << num2 << " "; //Imprime los primeros dos números de la serie

    for (i = 2; i < n; ++i)
    {
        num3 = num1 + num2; //Calcula el siguiente número en la serie
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
 */
/*#include <iostream>
 //para saber si es numero primo o no

bool es_primo(int numero) {
    // Un número menor o igual que 1 no es primo
    if (numero <= 1) {
        return false;
    }

    // Verificar si el número es divisible por algún número menor que él mismo
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    // Si no fue divisible por ningún número, entonces es primo
    return true;
}

int main() {
    int numero;
    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> numero;

    if (es_primo(numero)) {
        std::cout << numero << " es primo.\n";
    } else {
        std::cout << numero << " no es primo.\n";
    }

    return 0;
}
*/
/*#include <iostream>
 //para saber si es numero par o no
using namespace std;

int main() {
    // Pedimos al usuario que ingrese un número
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Verificamos si el número es par o impar
    if (numero % 2 == 0) {
        cout << numero << " es par" << endl;
    } else {
        cout << numero << " es impar" << endl;
    }

    return 0;
}
 */
/*#include <iostream>
 //tablas de multiplicar

int main() {
    int numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    for(int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
    }

    return 0;
}
*/