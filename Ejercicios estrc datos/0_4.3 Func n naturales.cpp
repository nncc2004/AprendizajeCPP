#include<iostream>
using namespace std;
int funcion(int n){
	int sum = 0;
	for(int i = 1;i<=n; i++){
		sum += i;
	}
	return sum;
}

int main(){
	int n;
	cout<<"Ingrese el numero 'n'\n";
	cin>>n;
	cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<funcion(n);
	return 0;
}
