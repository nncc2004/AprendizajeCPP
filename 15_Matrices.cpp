#include <iostream>
using namespace std;
//Una matriz o arreglo bidimensional es igual a lo visto en mat022.



int main(){
    int matriz[10][10]; //creada una matriz, vacia por ahora, de 10x10
    int i=0, j=0, num=1;

    //Aqui la vamos recorriendo y rellenando
    while(i<10){ 
        while(j<10){
            matriz[i][j] = num;
            j++;
            num++;
        }
        j = 0;
        i++;
    }

    i=0, j=0;
    //Aqui la vamos recorriendo para mostrarla por pantalla
        while(i<10){
        while(j<10){
            if(matriz[i][j]< 10){
                cout<<" "<<matriz[i][j]<<"  |";
            }else if(matriz[i][j]< 100){
                cout<<" "<<matriz[i][j]<<" |";
            }else{
                cout<<" "<<matriz[i][j]<<"|";
            }   
            j++;
            num++;
        }
        cout<<"\n";
        j = 0;
        i++;
    }
}