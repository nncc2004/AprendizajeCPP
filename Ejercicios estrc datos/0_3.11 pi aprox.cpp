#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	int n;
	float pi, mult1, mult2;
	pi = 2; // 2 pq la fórmula es para pi medios. 
	cout<<"Ingrese el numero 'n'. \n";
	cin>>n;
	for(int i = 1; i<n; i++){
		mult1 = (2.0*i)/((2.0*i)-1);
		mult2 = (2.0*i)/((2.0*i)+1);
		pi *= (mult1*mult2);
		system("cls");
		cout<<(2.0*i)<<" / "<<((2.0*i)-1)<<" y "<<(2.0*i)<<" / "<<((2.0*i)+1)<<"\n";
		cout<<mult1<<" * "<<mult2<<"\n";
		cout<<"n = "<<i<<"\n";
		cout<<pi;
		//system("pause");
	}
	return 0;
}
