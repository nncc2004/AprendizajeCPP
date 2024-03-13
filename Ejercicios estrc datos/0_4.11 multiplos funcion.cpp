#include<iostream>
#include<cmath>
using namespace std;


bool multiplo(int a, int b){
	if(b%a == 0){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	int a, b, resp = 1;
	while(resp != 0){
		cout<<"Ingrese 'a'\n";
		cin>>a;
		cout<<"Ingrese 'b' \n";
		cin>>b;
		if(multiplo(a, b)){
			cout<<b<<" si es multiplo de "<<a<<"\n";
		} else {
			cout<<b<<" no es multiplo de "<<a<<"\n";
		}
		cout<<"Desea seguir ingresando datos? 1 para si y 0 para no\n";
		cin>>resp;
	}	
	return 0;
}
