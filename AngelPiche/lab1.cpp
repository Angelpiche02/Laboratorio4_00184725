#include <iostream>

using namespace std; 

int main(){ 

    string nombre;
    string tipo; 

cout <<"Hola soy kraven, cual es tu nombre?"<< endl; 
cin >> nombre;

cout <<"Ingrese su tipo (animal, persona, malo)"<< endl;
cin >> tipo;

    if (tipo == "animal"){
        cout <<"Hola " << nombre << ", eres un animal y te protegere." << endl;
    } 

    else if (tipo == "persona"){ 
        cout <<"Hola "<< nombre << ", eres una persona  y te saludo." << endl;
    }

    else if (tipo == "malo"){
        cout <<"Hola "<< nombre << ", eres una mala persona y estas en mi lista."<< endl;
    }

    else {}


    return 0;
}
