/*Funci�n calcularRaices: Ampl�a el ejercicio anterior definiendo una funci�n void llamada calcularRaices que reciba los coeficientes de la ecuaci�n
(a, b, c) por valor y las variables donde se almacenar�n las ra�ces por referencia. Adem�s, incluye una variable por referencia que indique si
las ra�ces son reales o complejas. La funci�n debe calcular las ra�ces utilizando la f�rmula general y actualizar las variables correspondientes.*/
#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c, double & raiz, double & raiz1, double & raiz2, bool & reales, bool & complejas) {
    double D;
    
	D = pow(b, 2) - 4 * a * c;

    if (D == 0) {
        raiz1 = -b / (2 * a);
        raiz2 = raiz1;
        reales = true;
    } else if (D > 0) {
        raiz1 = (-b + sqrt(D)) / (2 * a);
        raiz2 = (-b - sqrt(D)) / (2 * a);
        reales = true;
    } else if (D < 0){
        double real = -b / (2 * a);
        double compleja = sqrt(abs(D)) / (2 * a);
        raiz1 = real + compleja;
        raiz2 = real - compleja;
        complejas = true;
    }
}

int main() {
    double a, b, c, raiz, raiz1, raiz2;
    bool reales,complejas;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    calcularRaices(a, b, c, raiz, raiz1, raiz2, reales, complejas);

    if (reales) {
        cout <<"Las raices son reales..." << endl;
        cout<<"La primera raiz es de: "<<raiz1<<endl;
		cout<<"La segunda raiz es de: "<<raiz2<<endl;

    } else {
        cout <<"Las ra�ces son complejas..." << endl;
       	cout<<"La primera raiz compleja es de: "<<raiz1<<" + "<<raiz2<<"i"<<endl;
		cout<<"La segunda raiz compleja es de: "<<raiz1<<" - "<<raiz2<<"i"<<endl;
    }

    return 0;
}

