#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    char *p;
    for(int i = 0; ; i++){
        p = new char[1073741824];
        if(p!= NULL){
            cout<<"Memoria asignada: "<<i<<"Gb\n";
            Sleep(100);
        }
    }

}
