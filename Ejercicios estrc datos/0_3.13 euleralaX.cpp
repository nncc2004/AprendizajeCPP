#include<iostream>
#include<cmath>
using namespace std;

int factorial(int num){
	int fact = 1;
	for(int i = 1; i<=num; i++){
		fact *= i;
	}
	return fact;
}

int main(){
	int x, n;
	float euler = 1, numerador, denominador;
	cout<<"Ingresa el numero 'n'\n";
	cin>>n;
	cout<<"Ingresa el numero 'x'\n";
	cin>>x;
	
	for(int i = 1; i <n; i++){
		numerador = pow(x,i);
		denominador = factorial(i);
		euler += numerador/denominador;
		
		
		system("cls");
		cout<<"Numerador: "<<numerador<<" Denominador: "<<denominador<<"\n ";
		cout<<euler<<"\n";
	}
	//cout<<"Prueba factorial: "<<factorial(x);
	return 0;
}
