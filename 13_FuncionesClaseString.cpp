#include <iostream>
using namespace std;

int main(){
    string a = "hola mundo", b = "como va todo?"; //con eso se define una variable perteneciente a la clase string y se pueden usar sus metodos sobre ella.

    //Largo:
    cout<<"la cantidad de caracteres que tiene el string 'a' es "<<a.size()<<"\n";
    cout<<"la cantidad de caracteres que tiene el string 'a' es "<<a.length()<<"\n";
    //No hay diferencia funcional entre .size() y .length()

    //Comparacion:
    if(a.compare(b) == 0){
        cout<<"Las cadenas son iguales \n";
    }else if(a.compare(b) < 0){
        cout<<"A es menor que B en el abecedario\n";
    }else if(a.compare(b) > 0){
        cout<<"A es mayor que B en el abecedario\n";
    }
    //Que un string sea menor que otro significa que esta mas cerca de la A que de la Z.

    //Concatenacion:
    a.append(" ");
    a.append(b);
    cout<<a<<"\n";
    //Se modifica la variable a para que quede con toda la informacion


    //string vacio:
    string vacio;
    if(vacio.empty() != 0){
        cout<<"La variable esta vacia \n";
    }


    //caracter especifico
    cout<<a[1]<<"\n";
    cout<<a.at(1)<<"\n";

    //Extraer subcadenas
    //saber que a en este momento es 'hola mundo como va todo?
    a = a.substr(0, 10);
    cout<<a<<"\n";
}