#include<iostream>
#include<cmath>
using namespace std;

float celcius(float f){
	
	float Fc;
	return Fc;
	
}
float fahrenheit(float c){
	float Ff;
	return Ff;
}
int main(){
	int accion;
	while(accion != 0){
		cout<<"Ingrese la opcion a realizar\n";
		cout<<"1) Pasar de Fahrenheit a Celcius\n";
		cout<<"2) Pasar de Celcius a Fahrenheit\n";
		cout<<"3) Ver tabla de transformacion de Fahrenheit a Celcius\n";
		cout<<"4) Ver tabla de transformacion de Celcius a Fahrenheit\n";
		cin>>accion;
		system("cls");
		switch(accion){
			case 1:
				int f;
				cout<<"Ingrese temperatura en Fahrenheit\n";
				cout<<"La temeperatura en grados celcius es: "<<celcius(f)<<"\n";
				break;
			case 2:
				int c;
				cout<<"Ingrese temperatura en Celcius\n";
				cout<<"La temeperatura en grados Fahrenheit es: "<<fahrenheit(c)<<"\n";
				break;
		}
	}
	return 0;
}
