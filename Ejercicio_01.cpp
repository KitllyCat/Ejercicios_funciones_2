//C�lculo del �rea de un C�rculo: Implementa un programa que calcule el �rea de un c�rculo dado su radio. Utiliza la constante M_PI
//de la librer�a cmath para obtener el valor de pi. Solicita al usuario el radio del c�rculo y utiliza la funci�n pow de cmath para
//calcular el cuadrado del radio. Muestra el resultado del �rea calculada.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double radio, area;
	
	cout << "Ingrese el radio del circulo: "<< endl;
	cin >> radio;
	
	area = M_PI *pow(radio,2);
	
    cout << "El area del circulo es de: " << area << endl;
	
	return 0;
	
}
