#include <iostream>

using namespace std; 

int main(){

    // Declarar variables

    int opcion;
    double num1, num2, resultado;

    //Se le pide al usuario 2 numeros
    
    cout<< "Seleccione el primer numero"<< endl;
    cin >> num1;

    cout << "Seleccione el segundo numero"<< endl; 
    cin >> num2;

    // Se hace un menu para tener distintas opciones 

    cout <<"-------MENU-------"<< endl;
    cout <<"1. Suma"<< endl;
    cout <<"2. Resta"<< endl;
    cout <<"3. Multiplicacion"<< endl;;
    cout <<"4. Division"<< endl;
    cout <<"5. Salir"<< endl;
    cout <<"-------------------"<< endl;
    cin >> opcion;

    // Se usa  el switch para poner los diferentes casos de opciones

    switch(opcion){
        case 1:
        resultado = num1 + num2;
        cout <<"La suma de los dos numeros es: "<< resultado<< endl;

        break;

        case 2:
        resultado = num1 - num2; 
        cout <<"La resta de los dos numeros es: "<< resultado << endl;

        break; 

        case 3: 
        resultado = num1 * num2;
        cout <<"La multiplicacion de los dos numeros es: "<< resultado<< endl;
        break;

        case 4: 
        if (num2 != 0){  //No se puede dividir entre 0, entonces hay que poner un distinto de para que se pueda realizar la division

            resultado = num1 / num2;
            cout <<"La division de los dos numeros es: "<< endl; 
        }
        else {
            cout <<"Error, no puedes dividir entre 0"<< endl;
        }
        break;

        case 5:
        cout << "Saliendo..."<< endl;
        return 1;
        break;

    }

    return 0;
}