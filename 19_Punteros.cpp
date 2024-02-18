#include <iostream>
using namespace std;

int main(){
    int x=5;
    int *ptr=&x; //esto significa crear un puntero que apunte a la direccion (&) de la variable x
    cout<<*ptr<<" "<<ptr<<" "<<&x<<"\n";//Se imrpime primero lo que hay en la direccion del puntero, luego la direccion a la que apunta y luego la direccion de la variable x
    *ptr = 17;//Con esto se modifica el contenido en la reiccion de memoria de x, por lo que se modifica el valor de x de forma indirecta.
    cout<<x<<"\n\n";

    //Intercambio de valores con punteros
    int a = 17, b = 7, aux = 0;
    int *ptra = &a;
    int *ptrb = &b;
    aux = a;
    *ptra = *ptrb;
    *ptrb = aux;
    cout<<a<<" "<<b<<"\n";

    //Punteros dobles (punteros que apuntan a otro puntero)
    int y = 15;
    int *ptry = &y;
    int **ptry2 = &ptry; //Este es el puntero doble, que solamente puede apuntar a la direccion de memoria de otro puntero existente
    cout<<ptry2<<" "<<&ptry<<"\n";
    **ptry2 = 25; //Al modificar lo que hay en la direccion almacenada se modifica la variable original 
    cout<<y<<"\n";

    //Puntros a arreglos
    //ver video 116

    //Arreglos de punteros
    //ver video 117
}