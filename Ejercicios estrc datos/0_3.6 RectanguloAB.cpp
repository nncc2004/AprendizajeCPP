#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout<<"Ingresa el alto\n";
	cin>>b;
	cout<<"Ingresa el ancho\n";
	cin>>a;
	for(int x = 0; x<b; x++){
		for(int j = 0; j<a; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}
