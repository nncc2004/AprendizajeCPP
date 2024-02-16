#include <iostream>
using namespace std;

//Una funcion recursiva e yuna que se llama a si misma al utilizarse
//Aca vamos a crear una funcion factorial de forma recursiva
//Se debe tener un valor base para que termine en algun momento la recursividad

int Factorial(int num){
    if (num==0){ //caso base
        return 1;
    }else{
        return num*Factorial(num-1);
    }
}

int main(){
    int num;
    cout<<"ingrese un numero\n";
    cin>>num;
    int resultado = Factorial(num);
    cout<<resultado;
}