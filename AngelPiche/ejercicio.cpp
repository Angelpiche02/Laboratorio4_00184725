//  Solicite al usuario un numero entero y luego utilice if, else if, else para determinar e imprimir uno de estos mensajes
// "El numero es positivo" "El numero es negativo" "El numero es cero"

#include <iostream>

using namespace std;

int main (){
    int numero;

    cout <<"Escriba un numero entero"<< endl;
    cin >> numero;

    if (numero < 0){
        cout <<"El numero es negativo"<< endl;
    }

    else if (numero > 0){
        cout <<"El numero es positivo"<< endl;
    }
    
    else if (numero == 0){
        cout <<"El numero es 0"<< endl;
    }
    else{}


    return 0;
}