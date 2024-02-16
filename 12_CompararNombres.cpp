#include<iostream>
#include<string.h>
using namespace std;

void ordenarNombres(char n1[100], char n2[100], char n3[100]){
    
    if(strcmp(n1,n2) == 0 || strcmp(n1,n3) == 0 || strcmp(n2,n3) == 0){
        cout<<"No ingrese nombres repetidos\n";
        return;
    }

    if(strcmp(n1,n2) < 0 && strcmp(n1,n3) < 0){ //n1 es el menor, por ende elprimero alfabeticamente
        cout<<"Caso 1\n";
        if(strcmp(n2,n3) < 0){
            cout<<n1<<" "<<n2<<" "<<n3<<"\n";
        }
        else if(strcmp(n3,n2) < 0){
            cout<<n1<<" "<<n3<<" "<<n2<<"\n";
        }

    } else if(strcmp(n2,n3) < 0 && strcmp(n2,n1) < 0){ //n2 es el menor, por ende elprimero alfabeticamente
        cout<<"Caso 2\n";
        if(strcmp(n1,n3) < 0){
            cout<<n2<<" "<<n1<<" "<<n3<<"\n";
        }
        else if(strcmp(n3,n1) < 0){
            cout<<n2<<" "<<n3<<" "<<n1<<"\n";
        }

    } else if(strcmp(n3,n2) < 0 && strcmp(n3,n1) < 0){ //n3 es el menor, por ende elprimero alfabeticamente
        cout<<"Caso 3\n";
        if(strcmp(n2,n1) < 0){
            cout<<n3<<" "<<n2<<" "<<n1<<"\n";
        }
        else if(strcmp(n1,n2) < 0){
            cout<<n3<<" "<<n1<<" "<<n2<<"\n";
        }

    }
}


int main(){
    char n1[100], n2[100], n3[100];
    cout<<"Ingrese nombre 1 \n";
    gets(n1); //Tenemos que usar esto porque es una cadena, algo asi como un array
    cout<<"Ingrese nombre 2 \n";
    gets(n2);
    cout<<"Ingrese nombre 3 \n";
    gets(n3);
    ordenarNombres(n1, n2, n3);
}