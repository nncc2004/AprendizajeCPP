#include<iostream>
#include<cmath>
using namespace std;


float progresion(float x, int n){
	int sum = 0;
	for(int i = 0; i <=n; i++){
		sum += pow(x,i);
	}
	return sum;
}


int main(){
	int n;
	float x;
	cout<<"Ingrese el numero 'n'\n";
	cin>>n;
	cout<<"Ingrese el numero 'x'\n";
	cin>>x;
	cout<<"El resultado de la progresion es: "<<progresion(x, n);
	return 0;
}
