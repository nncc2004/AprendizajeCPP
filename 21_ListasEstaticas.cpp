#include <iostream>
#include<windows.h>
using namespace std;


/*
            **CLINCA DENTAL**
        Se debe crear la agenda para UN dia en la clinica
1) Crear una lista para agendar pacientes en una clinica dental
2) La clinica atiende a 20 personas por dia entre 20 a 30 min por paceinte
3) La agenda debe considerar los siguientes datos: nombre, edad, sexo, fecha y hora de la consulta, total a pagar 
y servicios realizados
4) La agenda considera solamente los siguientes tratamientos:
    1- Limpieza dental = 174000
    2- Blanqueamiento dental = 70000
    3- Tapadura de caries = 30000 c/u
    4- Extraccion de muela = 40000 c/u
*/
//Variables globales:
#define precioLimpieza 174000
#define precioBlanqueamiento 70000
#define precioExtraccion 40000
#define precioTapadura 30000

//estructuras:
struct fecha{
    int hora;
    int min;
};
struct servicio{
    bool limpieza;
    bool blanqueamiento;
    int tapadura;
    int extraccion;
};

struct agenda{
    string nombre;
    int edad; 
    string sexo;
    int total;
    fecha fechaAtencion;
    servicio servicio;
}lista[20];

//Metodos
void MostrarUno(int i){
    cout<<"----------------------\n";
    cout<<"Nombre: "<<lista[i].nombre<<"\n";
    cout<<"Edad: "<<lista[i].edad<<"\n";
    cout<<"Sexo: "<<lista[i].sexo<<"\n";
    cout<<"Servicios realizados: \n";
    cout<<" limpieza: "<<lista[i].servicio.limpieza<<"\n";
    cout<<" blanqueamiento: "<<lista[i].servicio.blanqueamiento<<"\n";
    cout<<" tapaduras: "<<lista[i].servicio.tapadura<<"\n";
    cout<<" extraccion: "<<lista[i].servicio.extraccion<<"\n";
    cout<<"fecha de atencion: "<<lista[i].fechaAtencion.hora<<":"<<lista[i].fechaAtencion.min<<"0\n";
    cout<<"Total a pagar: "<<lista[i].total<<"\n";
    cout<<"----------------------\n";
    cout<<"\n";
}
void Mostrar(){
    for(int i = 0; i<20; i++){
        cout<<"Nombre: "<<lista[i].nombre<<"\n";
        cout<<"Edad: "<<lista[i].edad<<"\n";
        cout<<"Sexo: "<<lista[i].sexo<<"\n";
        cout<<"Servicios realizados: \n";
        cout<<" limpieza: "<<lista[i].servicio.limpieza<<"\n";
        cout<<" blanqueamiento: "<<lista[i].servicio.blanqueamiento<<"\n";
        cout<<" tapaduras: "<<lista[i].servicio.tapadura<<"\n";
        cout<<" extraccion: "<<lista[i].servicio.extraccion<<"\n";
        cout<<"fecha de atencion: "<<lista[i].fechaAtencion.hora<<":"<<lista[i].fechaAtencion.min<<"0\n";
        cout<<lista[i].fechaAtencion.hora<<":"<<lista[i].fechaAtencion.min<<"0\n";
        cout<<"Total a pagar: "<<lista[i].total<<"\n";
        cout<<"----------------------\n";
        cout<<"\n";
    }
}

void Iniciar(){
    for(int i = 0; i<20; i++){
        lista[i].nombre = "No ingresado";
        lista[i].edad = 0;
        lista[i].sexo = "No ingresado";
        lista[i].total = 0;
        lista[i].servicio.blanqueamiento = false;
        lista[i].servicio.tapadura = 0;
        lista[i].servicio.extraccion = 0;
        lista[i].servicio.limpieza = false;



    static int Hinicial = 8, contador = 0;

    if(contador == 2){
        Hinicial++;
        if(Hinicial == 13){
            Hinicial++;
        }
        contador = 0;
    }
    contador++;
    lista[i].fechaAtencion.hora = Hinicial;

    
    if(i%2 ==0){
        lista[i].fechaAtencion.min = 0;
    }else{
        lista[i].fechaAtencion.min = 3;
    }
        
    }
}


int ValidarEspacio(){
    for(int i=0; i<20; i++){
        if(lista[i].nombre == "No ingresado"){
            return i;
        }
    }
    return -1;
}

int validarHorario(int hora, int min){
    for(int i = 0; i<20; i++){
        if(lista[i].fechaAtencion.hora == hora && lista[i].fechaAtencion.min == min){
            if (lista[i].nombre == "No ingresado"){
                return i;
            }
            else{
                return -1;
            }
        }
    }
    return -1;
}

void Servicio(int i){
    int respuesta = 0;
    while(respuesta != 5){
    	system("cls");
        cout<<"Ingrese servicio a realizar:\n";
        cout<<"1) Limpieza \n2) Tapadura \n3) Extraccion \n4) Blanqueamiento \n5) Finalizar\n";
        cin>>respuesta;
        switch (respuesta)
        {
        case 1:
            lista[i].servicio.limpieza = true;
            system("pause");
            break;
        case 2:
            cout<<"Cuantas tapaduras?\n";
            cin>>lista[i].servicio.tapadura;  
            system("pause");
            break;
        case 3:
            cout<<"Cuantas extracciones?\n";
            cin>>lista[i].servicio.extraccion; 
            system("pause");
            break;
        case 4:
            lista[i].servicio.blanqueamiento = true;
            system("pause");
            break;
        case 5:
            break;
        default:
            cout<<"Opcion no disponible\n";
            system("pause");
            break;
        }
    }
    
}

void TotalApagar(int i){
    int sum = 0;
    sum += lista[i].servicio.extraccion*precioExtraccion;
    sum += lista[i].servicio.tapadura*precioTapadura;
    if(lista[i].servicio.limpieza == true){
        sum += precioLimpieza;
    }
    if(lista[i].servicio.blanqueamiento == true){
        sum += precioBlanqueamiento;
    }
    lista[i].total = sum;
}

void Agregar(){
    if(ValidarEspacio() == -1){
        cout<<"Agenda llena para hoy\n";
    }else{
        int hora = 0, min = 0;
        cout<<"Ingrese hora\n";
        cin>>hora;
        cout<<"Ingrese min\n";
        cin>>min;
        min = min/10;
        int i = validarHorario(hora, min);
        if(i == -1){
            cout<<"Ese horario no estÃ¡ disponible. Intente con otro\n";
            Agregar();
        }else{
            cout<<"Ingrese nombre del paciente\n";
            fflush(stdin);
            getline(cin, lista[i].nombre);
            cout<<"Ingrese edad del paciente\n";
            cin>>lista[i].edad;
            cout<<"Ingrese sexo del paciente\n";
            fflush(stdin);
            getline(cin, lista[i].sexo);
            Servicio(i);
            TotalApagar(i);
            cout<<"Ingresado correctamente\n";
            MostrarUno(i);
        }
    }
}
int Buscar(){
    string buscar;
    cout<<"Ingrese un nombre\n";
    fflush(stdin);
    getline(cin, buscar);
    for(int i = 0; i<20;i++){
        if(buscar.compare(lista[i].nombre)==0){
            cout<<"Buscando...\n";
            Sleep(1000);
            system("cls");
            cout<<"Encontrado:\n";
            MostrarUno(i);
            return i;
        }
    }
    cout<<"El cliente buscado no esta en el registro, revise ortografía\n";
    Buscar();
}
void Eliminar(){
	cout<<"Ingrse un cliente para eliminar de la agenda:\n";
	int i = Buscar();
	lista[i].nombre = "No ingresado";
    lista[i].edad = 0;
    lista[i].sexo = "No ingresado";
    lista[i].total = 0;
    lista[i].servicio.blanqueamiento = false;
    lista[i].servicio.tapadura = 0;
    lista[i].servicio.extraccion = 0;
    lista[i].servicio.limpieza = false;
}
int main(){
    Iniciar();
    int accion =0;
    while(accion != 5){
    	cout<<"Que accion desea realizar:\n";
    	cout<<"1) Mostrar todos los registros\n";
    	cout<<"2) Agregar un cliente\n";
    	cout<<"3) Buscar un cliente\n";
    	cout<<"4) Eliminar un cliente\n";
    	cout<<"5) Finalizar\n";
    	cin>>accion;
    	switch(accion){
    		case 1:
    			Mostrar();
    			break;
    		case 2:
    			Agregar();
    			break;
    		case 3:
    			Buscar();
    			break;
    		case 4:
    			Eliminar();
    			break;
    		case 5:
    			break;
    		default:
    			cout<<"Ingrese una opcion valida\n";
		}
	}
}
