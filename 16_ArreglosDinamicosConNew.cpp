#include <iostream>
#include<cstdlib>
using namespace std;

int main(){
    int *vector1 = new int[10]; //Acá se creó un vector dinámico con tamaño inicial 10 con new, pero que se podrá modificar más adelante
    //También se pueden asignar valores mediante el uso de punteros, así: *(nombreVector + poscision) = valor. Vease video 94
    for(int i = 0; i<10; i++){
        vector1[i] = i+1;
        cout<<i<<") "<<vector1[i]<<"\n";
    }
    cout<<"\n";
    int *vector2 =(int *) malloc(sizeof(int)*10); //Aca se uso malloc, para lo que fue necesario usar la libreria cstdlib.
    for(int i = 0; i<10; i++){
        vector2[i] = -(i+1);
        cout<<i<<") "<<vector2[i]<<"\n";
    }
    //Para eliminar un vector o arreglo:
    delete vector1; //Con delete todavia se pueden ver los valores porque no se han borrado, pero seran sobreescritos en algun momento. Sirve solo para new
    free(vector2); //Con Free pasa lo mismo de sobreescribirse, pero sirve solo para malloc


    //Para redimensionar un arreglo dinamico:
    int *arreglo1 = new int[10];
    for(int i = 0; i<10; i++){
        arreglo1[i] = i+1;
    }
    //Supongamos que tenemos el arreglo1 con 10 espacios y queremos que tenga 15, se debe definir uno nuevo para expandirlo:
    int *arreglo2 = (int*)realloc(arreglo1, sizeof(int)*15);
    //Se define en un nuevo arreglo para prevenir que en caso de error (NULL) se borren los datos en el original, se puede mover luego al original:
    if(arreglo2 != NULL){
        *arreglo1 = *arreglo2;
    }
    //Para corroborar voy a rellenar todos los espacios del arreglo 1 con un contador hasta 15 sin errores
    for(int i = 0; i<15;i++){
        //arreglo1[i] = i+1;
        cout<<i<<") "<<arreglo1[i]<<"\n";
    }
}