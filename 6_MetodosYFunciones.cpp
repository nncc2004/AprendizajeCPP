#include <iostream>
using namespace std;

//La diferencia entre método y función, es que el método cumple su objetivo sin retornar un valor, ejecuta su contenido y listo. En cambio, las funciones, retornan un valor como resultado. El tipo de dato a retornar se define desde el inicio.

//Método: se define con void MiMétodo(parámetro)
void MiMetodo(int parametro){
    if(parametro%2 == 0){
        printf("El numero es par\n");
    }else{
        printf("El unmero es impar\n");
    }

}

//Función: Se define con float, int o el tipo de dato que se desee y se dee terminar con return del dato a retornar

float MiFuncion(float num1, float num2){
    float promedio = (num1+num2)/2;
    return promedio;
}

int main(){
    //Para llamar a un metodo es asi
    int numero;
    cout<<"ingrese un numero para el metodo\n";
    cin>>numero;
    MiMetodo(numero);
    //Para llamar a una funcion es asi
    int num1, num2;
    cout<<"ingrese dos numeros para la funcion\n";
    cin>>num1;
    cin>>num2;
    float funcion = MiFuncion(num1, num2);
    cout<<"El promedio es "<< funcion;
}