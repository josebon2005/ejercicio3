#include <iostream>
using namespace std;

// Prototipos de funciones
void imprimirPares2a20();
void tablaMultiplicar();
void sumaParesHastaN();
void calcularFactorial();
void imprimirPrimos1a50();
void imprimirSerieEspecial();
void imprimirFibonacci10();
void sumaPrimeros100();
void imprimirDivisores();
void imprimirPrimeros10Primos();

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "\n--- MENU DE EJERCICIOS (BUCLES FOR) ---\n";
        cout << "1. Imprimir los numeros pares del 2 al 20\n";
        cout << "2. Mostrar la tabla de multiplicar de un numero ingresado\n";
        cout << "3. Calcular la suma de todos los numeros pares desde 1 hasta n\n";
        cout << "4. Calcular el factorial de un numero\n";
        cout << "5. Imprimir la serie de numeros primos del 1 al 50\n";
        cout << "6. Imprimir la serie especial: 1, 3, 6, 10, 15, ..., n\n";
        cout << "7. Imprimir los primeros 10 terminos de la serie de Fibonacci\n";
        cout << "8. Calcular la suma de los primeros 100 numeros naturales\n";
        cout << "9. Imprimir todos los divisores de un numero ingresado\n";
        cout << "10. Imprimir los primeros 10 numeros primos\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: imprimirPares2a20(); break;
            case 2: tablaMultiplicar(); break;
            case 3: sumaParesHastaN(); break;
            case 4: calcularFactorial(); break;
            case 5: imprimirPrimos1a50(); break;
            case 6: imprimirSerieEspecial(); break;
            case 7: imprimirFibonacci10(); break;
            case 8: sumaPrimeros100(); break;
            case 9: imprimirDivisores(); break;
            case 10: imprimirPrimeros10Primos(); break;
            case 0: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida, intente de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}

// Función que imprime los números pares del 2 al 20
void imprimirPares2a20() {
    cout << "\nNumeros pares del 2 al 20: ";
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Función que muestra la tabla de multiplicar de un número ingresado
void tablaMultiplicar() {
    int num;
    cout << "\nIngrese un numero para mostrar su tabla de multiplicar: ";
    cin >> num;

    cout << "Tabla del " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

// Función que calcula la suma de todos los números pares desde 1 hasta n
void sumaParesHastaN() {
    int n, suma = 0;
    cout << "\nIngrese un numero entero positivo: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    cout << "La suma de todos los numeros pares desde 1 hasta " << n << " es: " << suma << endl;
}

// Función que calcula el factorial de un número
void calcularFactorial() {
    int num;
    long long factorial = 1;
    cout << "\nIngrese un numero para calcular su factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no esta definido para numeros negativos.\n";
        return;
    }

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;
}

// Función que imprime los números primos del 1 al 50
void imprimirPrimos1a50() {
    cout << "\nNumeros primos del 1 al 50: ";

    for (int num = 2; num <= 50; num++) {
        bool esPrimo = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            cout << num << " ";
        }
    }

    cout << endl;
}

// Función que imprime la serie 1, 3, 6, 10, 15, ..., n
void imprimirSerieEspecial() {
    int n, suma = 0;
    cout << "\nIngrese un numero para generar la serie: ";
    cin >> n;

    cout << "Serie: ";
    for (int i = 1; suma + i <= n; i++) {
        suma += i;
        cout << suma << " ";
    }
    cout << endl;
}

// Función que imprime los primeros 10 términos de la serie de Fibonacci
void imprimirFibonacci10() {
    int a = 0, b = 1, temp;
    cout << "\nLos primeros 10 terminos de la serie de Fibonacci son:\n";

    for (int i = 1; i <= 10; i++) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

// Función que calcula la suma de los primeros 100 números naturales
void sumaPrimeros100() {
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        suma += i;
    }
    cout << "\nLa suma de los primeros 100 numeros naturales es: " << suma << endl;
}

// Función que imprime todos los divisores de un número ingresado
void imprimirDivisores() {
    int num;
    cout << "\nIngrese un numero para encontrar sus divisores: ";
    cin >> num;

    cout << "Los divisores de " << num << " son: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Función que imprime los primeros 10 números primos
void imprimirPrimeros10Primos() {
    int contador = 0, num = 2;
    cout << "\nLos primeros 10 numeros primos son:\n";

    while (contador < 10) {
        bool esPrimo = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            cout << num << " ";
            contador++;
        }
        num++;
    }
    cout << endl;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.