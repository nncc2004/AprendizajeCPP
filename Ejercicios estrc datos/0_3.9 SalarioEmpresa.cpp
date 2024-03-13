#include<iostream>
using namespace std;

float NuevoSalario(float salarioBase){
	float Nuevo;
	if(salarioBase<=9000){
		cout<<"Caso 1\n";
		Nuevo = salarioBase + (2.0/10)*salarioBase;
	} else if(salarioBase<=15000){
		cout<<"Caso 2\n";
		Nuevo = salarioBase + (1.0/10)*salarioBase;
	}else if(salarioBase<=20000){
		cout<<"Caso 3\n";
		Nuevo = salarioBase + (5.0/100)*salarioBase;
	}else{
		cout<<"Caso 4\n";
		Nuevo = salarioBase;
	}
	return Nuevo;
}

int main(){
	float salarioBase;
	cout<<"Ingrese su salario. Si desea terminar ingrese 0\n";
	cin>>salarioBase;
	while (salarioBase > 0){
		cout<<"Su nuevo salario es: "<<NuevoSalario(salarioBase)<<" dolares. \n";
		cout<<"Ingrese su salario. Si desea terminar ingrese 0\n";
		cin>>salarioBase;
	}
	
	return 0;
}
