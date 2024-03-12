#include<iostream>
 
using namespace std;
 //crear una lista que simule una lista de tareas pendientes
 //Dicha tarea deberá guardar su descripción y el estado
 
struct Tarea{
 	 string nombreTarea;
 	 string descripcion;
 	 bool estado;
 	 struct Tarea *sig;
};
 
struct Lista{
 	int longitud;
 	struct Tarea *t;
};
void agregarTarea(Lista *&lista){
	if(lista == NULL){
		lista = new Lista;
	}else{
		
	}
}
int main(){
	Lista *lista = NULL;
	int resp = 0;
	bool continuar = true;
	while(continuar){
		cout<<"Ingrese la opción que desea realizar\n";
		cout<<"1) Agregar nueva tarea \n";
		cout<<"2) Mostrar tareas \n";
		cout<<"3) Mostrar cantidad de tareas pendientes\n";
		cout<<"4) Mostrar tareas completadas\n";
		cout<<"5) Buscar tarea por su índice\n";
		cout<<"6) Buscar tarea por su nombre\n";
		cout<<"7) Eliminar tarea\n";
		cout<<"8) Reiniciar lista \n";
		cout<<"9) Terminar tarea \n";
		cout<<"10) Mostrar tareas pendientes\n";
		cout<<"11) Finalizar programa \n";
		cin>>resp;
	 	
		switch(resp){
			case 1:
				agregarTarea(lista);
				system("pause");
				break;
			case 2: 
				system("pause");
				break;
			case 3:
				system("pause");
				break;
			case 4:
				system("pause");
				break;
			case 5:
				system("pause");
				break;
			case 6:
				system("pause");
				break;
			case 7:
				system("pause");
				break;
			case 8:
				system("pause");
				break;
			case 9:
				system("pause");
				break;
			case 10:
				system("pause");
				break;
			case 11:
				continuar = false;
				break;
			default:
				cout<<"Ingrese una opcion existente\n";
				system("pause");
				break;
		}
	}
};
