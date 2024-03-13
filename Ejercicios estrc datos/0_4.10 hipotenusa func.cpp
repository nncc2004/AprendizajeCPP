#include<iostream>
#include<cmath>
using namespace std;


float hipotenusa(float a, float b){
	//raiz de: cateto a al cuadrado mas cateto b al cuadrado.
	float hipo  = 0;
	hipo = sqrt(pow(a,2)+pow(b,2));
	return hipo;
}


int main(){
	int resp = 1;
	float a, b;
	while(resp != 0){
		cout<<"Ingrese el lado 'a' del triangulo\n";
		cin>>a;
		cout<<"Ingrese el lado 'b' del triangulo\n";
		cin>>b;
		cout<<"El largo de la hipotenusa es: "<<hipotenusa(a,b)<<"\n";
		cout<<"Desea seguir ingresando datos? 1 para si y 0 para no\n";
		cin>>resp;
	}	
	return 0;
}
