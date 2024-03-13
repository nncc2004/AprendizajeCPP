#include<iostream>
using namespace std;

int main(){
	int a, cont;
	cout<<"Ingrese el largo de los lados del rombo\n";
	cin>>a;
	cont = 1;
	int reducEsp = (2*a)-1;
	for(int i = 0; i<a; i++){
		for(int k = reducEsp; k>0; k--){
				cout<<" ";
			}
		reducEsp = reducEsp- 2;
		for(int j = 0; j<cont; j++){
			cout<<" *";
		}
		cout<<"\n";
		cont = cont+2;
	}
	
	reducEsp = 2*a-3;
	cont = cont-4;
	for(int i = cont; i >= a-1; i--){
		
		for(int k = reducEsp; k<=(2*a)-1; k++){
				cout<<" ";
			}
		reducEsp = reducEsp - 2;
		
		
		for(int j = 0; j<cont; j++){
			cout<<" *";
		}
		cout<<"\n";
		cont = cont-2;
	}
	system("pause");
	return 0;
}
