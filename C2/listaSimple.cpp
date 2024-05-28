#include<iostream>
using namespace std;




//Se define el tipo de dato que tendrán los elementos
typedef int tElemLista; 
//Se define el struct de cada nodo con el tipo de dato especificado anteriormente
struct tNodo{
	tElemLista info;
	tNodo* sig;
};

//Se define el TDA de la lista
class tLista {
	private:
		tNodo* head;
		tNodo* tail;
		tNodo* curr;
		unsigned int listSize;
		unsigned int pos; // posicion actual en la lista
	public:
		//Constructor de la lista
		tLista() { 
			head = NULL;
			tail = NULL;
			curr = NULL;
			listSize = 0; 
			pos = 0;
		};
		//Funciones y métodos		
		void clear(); //1
		int insert(tElemLista item); //2
		int append(tElemLista item); //3
		tElemLista erase(); //4
		void display(); //5
		void moveToStart(); //6
		void moveToEnd(); //7
		void next(); //8
		void prev(); //9
		int length(); //10
		int currPos(); //11
		void moveToPos(int pos); //12
		tElemLista getValue(); //13
};


//1
void tLista::clear() {
	tNodo* temp;
	while (head != NULL) {
	    temp = head;
	    head = head->sig;
	    delete temp;
	}
	head = NULL;
	tail = NULL;
	curr = NULL;
	listSize = 0;
	pos = 0;
}
//2
int tLista::insert(tElemLista item) {
    if (curr == NULL) { //Significa que la lista está vacía
        head = new tNodo;
        head->info = item;
        head->sig = NULL;
        tail = head;
        curr = head;
    } else { //No está vacía
        if (pos == 0) { // Insertar en la primera posición
            tNodo* newNode = new tNodo;
            newNode->info = item;
            newNode->sig = head;
            head = newNode;
            curr = newNode;
        } else {
            tNodo* prevNode = head;
            for (unsigned int i = 0; i < pos - 1; i++) { // Buscar el nodo en la posición correcta
                prevNode = prevNode->sig;
            }
            tNodo* newNode = new tNodo;
            newNode->info = item;
            newNode->sig = prevNode->sig;
            prevNode->sig = newNode;
            if (curr == tail) tail = newNode; // Actualizar tail si se inserta al final
            curr = newNode;
        }
    }
    listSize++;
    return pos;
}
//3
int tLista::append(tElemLista item) {
    tNodo* nuevoNodo = new tNodo;
    nuevoNodo->info = item;
    nuevoNodo->sig = NULL;
    
    if (listSize == 0) {
        head = nuevoNodo;
        tail = nuevoNodo;
        curr = nuevoNodo;
    } else {
        tail->sig = nuevoNodo;
        tail = nuevoNodo;
    }
    listSize++;
    return listSize - 1;
}
//4
tElemLista tLista::erase() {
    if (curr != NULL) {
        tElemLista item = curr->info;  // Guardar el valor del nodo actual
        tNodo* temp = curr;            // Guardar una referencia al nodo actual
        if (curr == head) {            // Si el nodo actual es el primero en la lista
            head = head->sig;          // Mover la cabeza al siguiente nodo
            if (tail == temp) {        // Si el nodo actual es también la cola
                tail = NULL;           // Actualizar la cola a NULL (lista vacía)
            }
        } else {
            // Buscar el nodo anterior al nodo actual
            tNodo* prevNode = head;
            while (prevNode->sig != curr) {
                prevNode = prevNode->sig;
            }
            // Si el nodo actual es la cola, actualizar la cola
            if (tail == curr) {
                tail = prevNode;
            }
            prevNode->sig = curr->sig;  // Enlazar el nodo anterior al siguiente del actual
        }
        delete temp;                    // Liberar memoria del nodo actual
        curr = head;                    // Mover curr al inicio de la lista
        listSize--;                    // Reducir el tamaño de la lista
        return item;                   // Retornar el valor del nodo eliminado
    }
    // En este caso, podrías lanzar una excepción o devolver un valor predeterminado
}

//5
void tLista::display() {
    tNodo* temp = head;
    while (temp != NULL) {
        cout << temp->info << " -> ";
        temp = temp->sig;
    }
    cout << "FIN" << endl;
}
//6
void tLista::moveToStart() {
    curr = head;
    pos = 0;
}
//7
void tLista::moveToEnd() {
    curr = tail;
    pos = listSize;
}
//8
void tLista::next() {
    if (curr != NULL && curr->sig != NULL) {
	    curr = curr->sig;
	    pos++;
    }
}
//9
void tLista::prev() {
    if (curr == head) {
        return; // No se puede mover más hacia atrás
    }
    tNodo* temp = head;
    pos = 0;
    while (temp != NULL && temp->sig != curr) {
        temp = temp->sig;
        pos++;
    }
    curr = temp;
};
//10
int tLista::length() {
    return listSize;
};
//11
int tLista::currPos() {
    return pos;
};
//12
void tLista::moveToPos(int posicion) {
    if (posicion < 0 || posicion >= listSize) return; // Corregir la condición para evitar ir fuera de los límites
    curr = head;
    pos = 0;
    for (unsigned int i = 0; i < posicion; i++) {
        curr = curr->sig;
        pos++;
    }
}

//13
tElemLista tLista::getValue() {
    if (curr != NULL) {
        return curr->info; // Corregir la verificación para devolver el valor de curr
    } 
}







int main(){
	/*
	cout<<"Inicio del codigo\n";
	tLista miLista;
	miLista.clear();
	cout<<"Insertado a en la posicion "<<miLista.append('a')<<"\n";
	cout<<"Insertado b en la posicion "<<miLista.append('b')<<"\n";
	cout<<"Insertado c en la posicion "<<miLista.append('c')<<"\n";
	cout<<"Insertado d en la posicion "<<miLista.append('d')<<"\n";
	cout<<"Insertado e en la posicion "<<miLista.append('e')<<"\n";
	cout<<"Insertado f en la posicion "<<miLista.append('f')<<"\n";
	cout<<"\n";
	miLista.display();
	cout<<miLista.currPos()<<"\n";
	*/

	return 0;
};
