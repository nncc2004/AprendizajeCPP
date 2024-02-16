#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void IniciarVectores(int vector[00]){
    int i = 0;
    
    while(i<10){
        vector[i] = rand()%11;
        i++;
    }
}

void MostrarVector(int vector[100]){
    for(int i = 0; i<10; i++){
        cout<<vector[i]<<"   ";
    }
    cout<<"Fin del vector \n";

}
void SumaVectores(int vector1[10], int vector2[10], int vectorSum[10]){
    int i = 0;
    while(i<10){
        vectorSum[i] = vector1[i] + vector2[i];
        i++;
    }
}

int main(){
    srand(time(NULL));
    int a[10], b[10], c[10];
    IniciarVectores(a);
    IniciarVectores(b);

    MostrarVector(a);
    MostrarVector(b);

    SumaVectores(a, b, c); 
    MostrarVector(c);
    
}