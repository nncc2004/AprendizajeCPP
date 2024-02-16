#include <iostream>
#include<string.h> //Se debe incluir esta libreria para usar sus funciones. Nos permite manipular strings como si fueran arreglos.
using namespace std;

int main(){
    //strcat: concatenacion
    char a[] = "hola mundo ";
    char b[] = "como va todo";
    strcat(a,b); 
    cout<<a<<"\n\n";

    //strcmp:comparacion
    char a2[] = "hola mundo";
    char b2[] = "hola mundo";

    if(strcmp(a2,b2) == 0){
        cout<<"Estas cadenas son iguales\n\n";
    }else{
        cout<<"Estas cadenas son distintas\n\n";
    }

    //strcpy: copiar un arreglo sobre otro
    char a3[] = "hola mundo ";
    char b3[] = "como va todo\n\n";
    strcpy(a3,b3);
    cout<<a3;

    //strlen: largo de una cadena
    char a4[] = "hola mundo";
    cout<<strlen(a4)<<"\n\n";

    //strrev: revercion
    char a5[] = "hola mundo";
    strrev(a5);
    cout<<a5<<"\n\n";

    //strupr y strlwr: a mayusculas o minusculas
    char a6[] = "Hola Mundo";
    strupr(a6);
    cout<<a6<<"\n\n";
    strlwr(a6);
    cout<<a6<<"\n\n";

    
}