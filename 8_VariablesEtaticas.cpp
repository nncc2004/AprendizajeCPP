#include <iostream>
using namespace std;
//Las variables estaticas usando static, tienen la capacidad de recordar el cambio que se les ha hecho, por ejemplo al llamar una funcion y modificar una variable local
//el cambio de va a guardar, aunque la variable sea local.  

int Sumatoria(int num){
    static int sumatoria = 0;
    sumatoria = sumatoria+num;
    return sumatoria;
}

int main(){
    int num = 0;
    cout<<"Ingrese un numero N\n";
    cin>>num;
    for(int i = 1;i<=num;i++){
        cout<<Sumatoria(i)<<"\n";
    }
}