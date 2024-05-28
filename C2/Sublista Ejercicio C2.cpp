#include<iostream>
#include "headerListaSimple.h"
using namespace std;


bool es_sublista(tLista lP, tLista lG){
    int i = 0, j = 0, k = 0;
    bool Flag1 = false;
    
    while (j<lG.length() && Flag1 == false){
        k = j, i =0, Flag1 = true;
        cout<<"\nciclo "<<j<<k<<i<<"\n";
        
        
        while(i<lP.length() && k<lG.length() && Flag1){        	
            lP.moveToPos(i);
            lG.moveToPos(k);
            cout<<"Diferencia "<< lP.getValue()<< lG.getValue()<<"\n";
            
			if(lP.getValue()!= lG.getValue()){
                Flag1 = false;
                
            }
            i++, k++;
        }
        j++;
    }
    return Flag1;
}

int main(){
	tLista lista1, lista2;
	for(int x=0; x<10; x++){
		lista1.append(x);
	}
	for(int x=4; x<7; x++){
		lista2.append(x);
	}
	
	lista1.display();
	lista2.display();
	cout<<es_sublista(lista2, lista1);
	
	return 0;
}
