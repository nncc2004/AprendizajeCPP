#include<iostream>
 
using namespace std;
 //crear una lista que simule una lista de tareas pendientes
 //Dicha tarea deber� guardar su descripci�n y el estado
 
 
//estructuras
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


//Funciones y metodos
Tarea*CrearNodo(){
	Tarea *aux = new Tarea;
	cout<<"Ingrese tarea\n";
	fflush(stdin);
	getline(cin, aux -> nombreTarea);
	cout<<"Ingrese descripcion\n";
	fflush(stdin);
	getline(cin, aux->descripcion);
	
	aux->estado = true;
	aux->sig = NULL;
	
	return aux;
}
void agregarTarea(Lista *&lista){
	if(lista == NULL){ //Para cuando es el primer elemento de la lista
		lista = new Lista;
		lista->longitud = 1;
		lista->t = CrearNodo();
		
	}else{
		Tarea *aux = lista->t;
		while(aux->sig != NULL){
			aux = aux->sig;
		}
		aux->sig = CrearNodo();
		lista->longitud = (lista->longitud)+1;
	}
}
void MostrarLista(Lista *&lista){
	if(lista == NULL){
		cout<<"La lista esta vacia\n";
	}else{
		Tarea *aux = lista->t;
		while(aux!= NULL){
			cout<<"Nombre: "<<aux->nombreTarea<<"\n";
			cout<<"Descripcion: "<<aux->descripcion<<"\n";
			if(aux->estado){
				cout<<"Estado: Pendiente\n\n";
			}else{
				cout<<"Estado: Completada\n\n";
			}
			aux = aux->sig;
		}
	}
}
void MostrarLongitud(Lista *lista){
	if(lista == NULL){
		cout<<"La lista esta vacia\n";
	}else{
		cout<<"Hay "<<lista->longitud<<" tareas por realizar.\n";
		}
}

Tarea *BuscarPorNombre(Lista *lista){
	if(lista == NULL){
		cout<<"La lista esta vacia\n";
	}else{
		string nombre;
		cout<<"Ingrese nombre de la tarea\n";
		fflush(stdin);
		getline(cin, nombre);
		Tarea *aux = lista->t;
		while(aux != NULL){
			if(nombre.compare(aux->nombreTarea)==0){
				cout<<"Nombre: "<<aux->nombreTarea<<"\n";
				cout<<"Descripcion: "<<aux->descripcion<<"\n";
				if(aux->estado){
					cout<<"Estado: Pendiente\n\n";
				}else{
					cout<<"Estado: Completada\n\n";
				}
				return aux;
			}
			aux = aux->sig;
		}
		cout<<"No se encontro la tarea.\n";
	}
}
int main(){
	Lista *lista = NULL;
	int resp = 0;
	bool continuar = true;
	while(continuar){
		cout<<"Ingrese la opci�n que desea realizar\n";
		cout<<"1) Agregar nueva tarea \n";
		cout<<"2) Mostrar tareas \n";
		cout<<"3) Mostrar cantidad de tareas pendientes\n";
		cout<<"4) Mostrar tareas completadas\n";
		cout<<"5) Buscar tarea por su �ndice\n";
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
				system("cls");
				break;
			case 2: 
				MostrarLista(lista);
				system("pause");
				system("cls");
				break;
			case 3:
				MostrarLongitud(lista);
				system("pause");
				system("cls");
				break;
			case 4:
				system("pause");
				system("cls");
				break;
			case 5:
				system("pause");
				system("cls");
				break;
			case 6:
				BuscarPorNombre(lista);
				system("pause");
				system("cls");
				break;
			case 7:
				system("pause");
				system("cls");
				break;
			case 8:
				system("pause");
				system("cls");
				break;
			case 9:
				system("pause");
				system("cls");
				break;
			case 10:
				system("pause");
				system("cls");
				break;
			case 11:
				continuar = false;
				break;
			default:
				cout<<"Ingrese una opcion existente\n";
				system("pause");
				system("cls");
				break;
		}
	}
};
