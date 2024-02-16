#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //el numero en los corchetes indica el tamaño del arreglo, si se deja vacío se adapta solo
    //cout<<arreglo[1]<<"\n";   //Con esto se busca un elemento en un indice especifico
    //los arreglos se recorren igual que en python con while
    int i = 0;
    while(i<10){
        cout<<arreglo[i]<<"\n";
        i++;
    }

    //Asi se asignan valores, igual que en python
    int vector[100];
    srand(time(NULL));
    for(int i =0; i <=100; i++){
        vector[i] = rand()%100;
    }
    cout<<vector<<"\n";
}