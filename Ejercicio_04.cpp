/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una ecuación cuadrática utilizando la fórmula general.
Utiliza la función sqrt de la librería cmath para calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y
muestra las raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/
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




