/*C�lculo de Ra�ces de una Ecuaci�n Cuadr�tica: Crea un programa que calcule las ra�ces de una ecuaci�n cuadr�tica utilizando la f�rmula general.
Utiliza la funci�n sqrt de la librer�a cmath para calcular la ra�z cuadrada. Solicita al usuario los coeficientes de la ecuaci�n (a, b, c) y
muestra las ra�ces obtenidas. Considera los casos en los que las ra�ces son reales o complejas.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double a,b,c,D;
	double raiz, raiz1, raiz2, real, compleja;
	
	cout<<"Ingrese el valor de a: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b: "<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c: "<<endl;
	cin>>c;
	
	D=pow(b,2)-4*a*b;
	
	if(D==0){
		raiz= -b/(2*a);
		cout<<"La raiz unica es de: "<<raiz<<endl;
		
		}else if(D>0){
			raiz1=(-b + sqrt(D)) / (2 * a);
			raiz2=(-b - sqrt(D)) / (2 * a);
			cout<<"La primera raiz es de: "<<raiz1<<endl;
			cout<<"La segunda raiz es de: "<<raiz2<<endl;
			
			}else{
				real= -b / (2 * a);
				compleja= sqrt(abs(D)) / (2 * a);
				cout<<"La primera raiz compleja es de: "<<real<<" + "<<compleja<<"i"<<endl;
				cout<<"La segunda raiz compleja es de: "<<real<<" - "<<compleja<<"i"<<endl;
			}
	
	return 0;
}




