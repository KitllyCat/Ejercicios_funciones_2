/*  C�lculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un tri�ngulo rect�ngulo utilizando la f�rmula de Pit�goras.
Solicita al usuario los valores de los catetos y utiliza la funci�n sqrt de cmath para calcular la ra�z cuadrada de la suma de los
cuadrados de los catetos. Muestra el resultado de la hipotenusa calculada.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double cateto1, cateto2, hipotenusa;
	cout<<"Ingrese el valor del cateto 1: "<<endl;
	cin>>cateto1;
	cout<<"Ingrese el valor del cateto 2: "<<endl;
	cin>>cateto2;
	
	hipotenusa=sqrt(pow(cateto1,2) + pow(cateto2,2));
	
	cout<<"El valor de la hipotenusa de este triangulo es de: "<<hipotenusa<<endl;
	
	return 0;
	
}

