/*Generador de N�meros Aleatorios: Crea un programa que genere y muestre una serie de n�meros aleatorios entre 0 y un n�mero m�ximo especificadopor 
el usuario. El programa solicitar� al usuario la cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. Utiliza la funci�n rand 
de la librer�a cstdlib para generar los n�meros aleatorios*/
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
