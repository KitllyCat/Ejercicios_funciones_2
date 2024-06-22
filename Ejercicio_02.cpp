/*Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números aleatorios entre 0 y un número máximo especificadopor 
el usuario. El programa solicitará al usuario la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función rand 
de la librería cstdlib para generar los números aleatorios*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int cant_num, valormx, num_gen, contador;
	
	cout<<"Ingrese la cantidad de numeros aleatorios a generar: "<<endl;
	cin>>cant_num;
	cout<<"Ingrese la maxima cantidad de numeros permitidos: "<<endl;
	cin>>valormx;
	
	srand(time(0));
	contador=0;
	
	while(contador<cant_num){
		num_gen=rand() % valormx + 1;
		cout<<"'"<<num_gen<<"'"<<endl;
		contador=contador+1;
	}
	return 0;
}
