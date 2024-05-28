#include<iostream>
using namespace std;

typedef char tElemLista; 

struct tNodo{
    tElemLista info;
    tNodo* sig;
    tNodo* ant; // Nuevo puntero que apunta al nodo anterior
};

class tLista {
private:
    tNodo* head;
    tNodo* tail;
    tNodo* curr;
    unsigned int listSize;
    unsigned int pos;

public:
    tLista() { 
        head = NULL;
        tail = NULL;
        curr = NULL;
        listSize = 0; 
        pos = 0;
    };
    
    void clear();
    int insert(tElemLista item);
    int append(tElemLista item);
    tElemLista erase();
    void display();
    void moveToStart();
    void moveToEnd();
    void next();
    void prev();
    int length();
    int currPos();
    void moveToPos(int pos);
    tElemLista getValue();
};

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

int tLista::insert(tElemLista item) {
    if (curr == NULL) {
        head = new tNodo;
        head->info = item;
        head->sig = NULL;
        head->ant = NULL;
        tail = head;
        curr = head;
    } else {
        tNodo* newNode = new tNodo;
        newNode->info = item;
        newNode->sig = curr;
        newNode->ant = curr->ant;
        if (curr == head) {
            head = newNode;
        } else {
            curr->ant->sig = newNode;
        }
        curr->ant = newNode;
    }
    listSize++;
    return pos;
}

int tLista::append(tElemLista item) {
    tNodo* newNode = new tNodo;
    newNode->info = item;
    newNode->sig = NULL;
    newNode->ant = tail;
    
    if (listSize == 0) {
        head = newNode;
    } else {
        tail->sig = newNode;
    }
    tail = newNode;
    curr = newNode;
    listSize++;
    return listSize - 1;
}

tElemLista tLista::erase() {
    if (curr != NULL) {
        tElemLista item = curr->info;
        tNodo* temp = curr;
        if (curr == head) {
            head = head->sig;
            if (tail == temp) {
                tail = NULL;
            }
        } else {
            curr->ant->sig = curr->sig;
            if (tail == curr) {
                tail = curr->ant;
            } else {
                curr->sig->ant = curr->ant;
            }
        }
        delete temp;
        curr = head;
        listSize--;
        return item;
    }
}

void tLista::display() {
    tNodo* temp = head;
    while (temp != NULL) {
        cout << temp->info << " <-> ";
        temp = temp->sig;
    }
    cout << "FIN" << endl;
}

void tLista::moveToStart() {
    curr = head;
    pos = 0;
}

void tLista::moveToEnd() {
    curr = tail;
    pos = listSize;
}

void tLista::next() {
    if (curr != NULL && curr->sig != NULL) {
        curr = curr->sig;
        pos++;
    }
}

void tLista::prev() {
    if (curr != NULL && curr->ant != NULL) {
        curr = curr->ant;
        pos--;
    }
}

int tLista::length() {
    return listSize;
}

int tLista::currPos() {
    return pos;
}

void tLista::moveToPos(int position) {
    if (position < 0 || position > listSize) return;
    curr = head;
    pos = 0;
    while (curr != NULL && pos < position) {
        curr = curr->sig;
        pos++;
    }
}

tElemLista tLista::getValue() {
    if (curr != NULL) {
        return curr->info;
    }
}
int main(){
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
	
	return 0;
};
