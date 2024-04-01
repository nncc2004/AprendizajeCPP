#include<iostream>
#include<cmath>
using namespace std;

float celcius(float f){
	float Fc;
	Fc = (f-32.0)*5.0/9.0;
	return Fc;
	
}
float fahrenheit(float c){
	float Ff;
	Ff = (c*9/5)+32;
	return Ff;
}
int main(){
	int accion = 1;
	while(accion != 0){
		system("cls");
		cout<<"Ingrese la opcion a realizar\n";
		cout<<"1) Pasar de Fahrenheit a Celcius\n";
		cout<<"2) Pasar de Celcius a Fahrenheit\n";
		cout<<"3) Ver tabla de transformacion de Fahrenheit a Celcius\n";
		cout<<"4) Ver tabla de transformacion de Celcius a Fahrenheit\n";
		cout<<"0) Salir\n";
		cin>>accion;
		system("cls");
		switch(accion){
			case 1:
				int f;
				cout<<"Ingrese temperatura en Fahrenheit\n";
				cin>>f;
				cout<<"La temeperatura en grados celcius es: "<<celcius(f)<<" grados\n";
				system("pause");
				break;
			case 2:
				int c;
				cout<<"Ingrese temperatura en Celcius\n";
				cin>>c;
				cout<<"La temeperatura en grados Fahrenheit es: "<<fahrenheit(c)<<" grados\n";
				system("pause");
				break;
			case 3:
				for(int i = 0; i <200; i++){
					cout<<i<<" grados Celcius equivalen a "<<fahrenheit(i)<<" grados Fahrenheit\n";
				}
				system("pause");
				break;
			case 4:
				for(int i = 32; i< 232; i++){
					cout<<i<<" grados Fahrenheit equivalen a " << celcius(i) << " grados Celcius\n";
				}
				system("pause");
			case 0:
				cout<<"Hasta luego!\n";
				break;
			default:
				cout<<"Opcion no reconocida, intente nuevamente\n";
		}
	}
	return 0;
}
