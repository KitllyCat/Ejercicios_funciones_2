/*Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y tijeras contra la computadora. El usuario elegirá su jugada
(piedra, papel o tijeras) y la computadora generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las reglas del juego.
El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el resultado final indicando el ganador del juego.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int spc, victorias = 0;
    string s;
    
    cout<<"---Juego de Piedra, Papel y Tijera---"<<endl;
    
    while (victorias < 3) {
        cout << "Indique su jugada (Piedra, Papel o Tijera): ";
        cin >> s;
        
        for (auto & c : s) c = tolower(c);

        spc = rand() % 3 + 1;
        string aux;
        if (spc == 1) {
            aux = "piedra";
        } else if (spc == 2) {
            aux = "papel";
        } else {
            aux = "tijera";
        }

        cout << "La computadora eligio: " << aux << endl;

        if (aux == s) {
            cout << "Empate" << endl;
        } else if ((s == "piedra" && aux == "tijera") || (s == "papel" && aux == "piedra") || (s == "tijera" && aux == "papel")) {
            cout << "Ganaste" << endl;
            victorias++;
        } else {
            cout << "Perdiste" << endl;
            derrotas++;
        }

        cout << "Victorias: " << victorias << " | Derrotas: " << derrotas << endl;
    }

    cout << "¡Felicitaciones! Has ganado 3 veces. Fin del juego :)" << endl;
    return 0;
}

