//  Solicite al usuario un numero entero y luego utilice if, else if, else para determinar e imprimir uno de estos mensajes
// "El numero es positivo" "El numero es negativo" "El numero es cero"

#include <iostream>

using namespace std;

int main (){

    //Variable
    int numero;

//Solicitar al usuario un numero entero

    cout <<"Escriba un numero entero"<< endl;
    cin >> numero;

//Si el numero es menor a 0, entonces el numero es negativo

    if (numero < 0){
        cout <<"El numero es negativo"<< endl;
    }

//Si no, si es mayor a 0, entonces el numero es positivo 

    else if (numero > 0){
        cout <<"El numero es positivo"<< endl;
    }
    
//Si no, si es igual a 0, entonces es 0

    else if (numero == 0){
        cout <<"El numero es 0"<< endl;
    }
    else{}


    return 0;
}