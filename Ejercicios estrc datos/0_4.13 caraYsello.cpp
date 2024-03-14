#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int flip(){
	//Generar un numero y si es par entonces da cero el % y si es impar da 1.
	//De ahí sacar cara o sello 
	srand(time(NULL));
	int numero = rand();
	return(numero%2);
}
int main(){
	int cara = 0, sello = 0, cant;
	cout<<"Indique la cantidad de lanzamientos de moneda a realizar\n";
	cin>>cant;
	for(int i = 1; i<= cant; i++){
		system("pause");
		system("cls");
		cout<<"-- Lanzamiento "<<i<<" de "<<cant<<" --\n";
		int resultado = flip();
		if(resultado == 1){
			cara += 1;
			cout<<"Cara!\n";
		}else{
			sello += 1;
			cout<<"Sello!\n";
		}
		cout<<"Contador: \n	Cara: "<<cara<<"\n	Sello: "<<sello<<"\n";

	}
	system("pause");
	system("cls");
	cout<<"Contador final: \n	Cara: "<<cara<<"\n	Sello: "<<sello<<"\n";
	return 0;
}
