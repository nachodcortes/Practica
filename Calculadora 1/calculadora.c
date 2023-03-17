#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int operacion;
    double num1, num2, resultado;
    
    cout << "Bienvenido a la calculadora cientifica\n";
    cout << "Ingrese la operacion que desea realizar:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Potencia\n";
    cout << "6. Logaritmo natural\n";
    cout << "7. Seno\n";
    cout << "8. Coseno\n";
    cout << "9. Tangente\n";
    cout << "10. Raiz cuadrada\n";
    cout << "Operacion: ";
    cin >> operacion;
    
    switch (operacion) {
        case 1:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 + num2;
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 2:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 - num2;
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 3:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 * num2;
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 4:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 / num2;
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 5:
            cout << "Ingrese el numero base: ";
            cin >> num1;
            cout << "Ingrese el exponente: ";
            cin >> num2;
            resultado = pow(num1, num2);
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 6:
            cout << "Ingrese el numero: ";
            cin >> num1;
            resultado = log(num1);
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 7:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            resultado = sin(num1);
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 8:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            resultado = cos(num1);
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 9:
            cout << "Ingrese el angulo en radianes: ";
            cin >> num1;
            resultado = tan(num1);
            cout << "El resultado es: " << resultado << endl;
            break;
            
        case 10:
            cout << "Ingrese el numero: ";
            cin >> num1;
            resultado = sqrt(num1);
            cout << "El resultado es: " << resultado << endl;
            break;
        }
   
   return 0;
}
