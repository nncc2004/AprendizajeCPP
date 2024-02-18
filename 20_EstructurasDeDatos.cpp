#include <iostream>
using namespace std;

//Froma 1 de iniciar
struct Persona{
    string nombre;
    string apellido;
    string direccion;
    int edad;
}A;//Forma 3 de declarar. Esta es global

void MostrarPersona (Persona z){
    cout<<"Nombre: "<<z.nombre<<" "<< z.apellido<<" \n";
}
int main(){
    //Forma 1 de declarar
    Persona P;
    P.nombre = "Pedro";
    P.apellido = "Torres";
    P.direccion = "Santiago";
    P.edad = 25;
    MostrarPersona(P);

    //Forma 2 de declarar
    Persona B = {"Ana", "Ramirez", "Floripa", 20};  //Nombre apellido direccion edad
    MostrarPersona(B);

    //Continuacion forma 3 de declarar
    A.nombre = "Frida";
    A.apellido = "Khalo";
    A.direccion = "Mexico";
    A.edad = 30;
    MostrarPersona(A);

}