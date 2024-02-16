#include <iostream>
using namespace std;

//Un namespace es un espacio donde puedes crear variables, funciones y metodos a los que se podran acceder desde donde se llame al namespace
//Se define así
namespace variables{
    int a = 15, b = 30;
    int Suma(){
        return a+b;
    }
}

namespace otroNamespace{
    int multiplicacion(int a, int b){
        return a*b;
    }
    int resta(int a, int b){
        return a-b;
    }
}


int main(){
    //Se llama de la siguiente manera. Al llamar al namespace las varialbes, funciones y metodos podran ser utilizadas en el mismo abito como si se hubieran definido
    using namespace variables;
    cout<<a<<"\n";
    cout<<Suma()<<"\n";
    
    //Se puede llamar a una funcion o metodo especifico de un namespace, pero solo se podra acceder a eso
    using otroNamespace::resta;
    cout<<resta(a, b)<<"\n";
    // cout<<multiplicacion()<<"\n"; //Error aqui porque multiplicacion no esta en este scope

}