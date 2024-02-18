#include <iostream>
using namespace std;


//1
void MostrarTodoVentas(string sucursales[4], string producto[5], int ventas[4][5]){

    for(int i =0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout<<"La cantidad de "<< producto[j]<<" vendida por la sucursal "<<sucursales[i]<<" es "<<ventas[i][j]<<"\n";
        }
        cout<<"\n\n";
    }
}
//2
void MostrarVentasSucursalDada(string sucursales[4], string producto[5], int ventas[4][5]){
    cout<<"Ingresar sucursal para consultar \n";
    int buscar = 0;
    do{
        for(int i =0; i<4; i++){
        cout<<i+1<<") "<<sucursales[i]<<"\n";
        }
        
        cin>>buscar;
    }while(buscar> 4 || buscar <1);
    
    for(int j = 0; j<5; j++){
            cout<<"La cantidad de "<< producto[j]<<" vendida por la sucursal "<<sucursales[buscar-1]<<" es "<<ventas[buscar-1][j]<<"\n";
        }
}
//3
void MostrarVentaArticuloYSucursalDada(string sucursales[4], string producto[5], int ventas[4][5]){
    cout<<"Ingresar sucursal para consultar \n";
    int buscarSucursal = 0;
    do{
        for(int i =0; i<4; i++){
        cout<<i+1<<") "<<sucursales[i]<<"\n";
        }
        
        cin>>buscarSucursal;
    }while(buscarSucursal> 4 || buscarSucursal <1);


    cout<<"Ingresar artículo para consultar las ventas\n";
    int buscarArticulo = 0;
    do{
        for(int i =0; i<5; i++){
        cout<<i+1<<") "<<producto[i]<<"\n";
        }
        
        cin>>buscarArticulo;
    }while(buscarArticulo> 5 || buscarArticulo <1);
    cout<<"La cantidad de "<< producto[buscarArticulo-1]<<" vendida por la sucursal "<<sucursales[buscarSucursal-1]<<" es "<<ventas[buscarSucursal-1][buscarArticulo-1]<<"\n";

}
//4
void MostrarStockSucursalDada(string sucursales[4], string producto[5], int stock[4][5]){
    cout<<"Ingresar sucursal para consultar \n";
    int buscar = 0;
    do{
        for(int i =0; i<4; i++){
        cout<<i+1<<") "<<sucursales[i]<<"\n";
        }
        
        cin>>buscar;
    }while(buscar> 4 || buscar <1);
    
    for(int j = 0; j<5; j++){
            cout<<"El stock de "<< producto[j]<<" disponible en la sucursal "<<sucursales[buscar-1]<<" es de "<<stock[buscar-1][j]<<"\n";
        }
}
//5
void MostrarTodoStock(string sucursales[4], string producto[5], int stock[4][5]){

    for(int i =0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout<<"El stock del producto "<< producto[j]<<" disponible en la sucursal "<<sucursales[i]<<" es "<<stock[i][j]<<"\n";
        }
        cout<<"\n\n";
    }
}

//6
void MostrarStockArticuloYSucursalDada(string sucursales[4], string producto[5], int stock[4][5]){
    cout<<"Ingresar sucursal para consultar \n";
    int buscarSucursal = 0;
    do{
        for(int i =0; i<4; i++){
        cout<<i+1<<") "<<sucursales[i]<<"\n";
        }
        
        cin>>buscarSucursal;
    }while(buscarSucursal> 4 || buscarSucursal <1);


    cout<<"Ingresar artículo para consultar stock\n";
    int buscarArticulo = 0;
    do{
        for(int i =0; i<5; i++){
        cout<<i+1<<") "<<producto[i]<<"\n";
        }
        
        cin>>buscarArticulo;
    }while(buscarArticulo> 5 || buscarArticulo <1);
    cout<<"La cantidad de "<< producto[buscarArticulo-1]<<" vendida por la sucursal "<<sucursales[buscarSucursal-1]<<" es "<<stock[buscarSucursal-1][buscarArticulo-1]<<"\n";

}
//7
void MostrarRecaudacionSucursales(string sucursales[4],int precios[5],int ventas[4][5]){
    for(int i =0; i<4; i++){
        int sum = 0;
        for(int j = 0; j<5;j++){
            sum+=(ventas[i][j]*precios[j]);
        }
        cout<<"La recaudacion de la sucursal "<<sucursales[i]<<" es de "<<sum<<" pesos \n";
    }
}
//8
void MostrarMayorNumeroVentas(string sucursales[4], int ventas[4][5]){
    int mayorV = -1;
    string mayorS;
    for(int i = 0; i<4; i++){
        int sum = 0;
        for(int j = 0; j<5;j++){
            sum += ventas[i][j];
        }
        if(sum > mayorV){
            mayorV = sum;
            mayorS = sucursales[i];
        }

    }
    cout<<"La sucursal con el mayor numero de ventas es '"<<mayorS<<"' con "<<mayorV<<" ventas \n";
}
//9
void MostrarMayorRecaudacion(string sucursales[4],int precios[5],int ventas[4][5]){
    int mayorR = -1;
    string mayorS;
    for(int i =0; i<4; i++){
        int sum = 0;
        for(int j = 0; j<5;j++){
            sum+=(ventas[i][j]*precios[j]);
        }
        if(sum > mayorR){
            mayorR = sum;
            mayorS = sucursales[i];
        }
    }
    cout<<"La sucursal con ela mayor recaudacion es '"<<mayorS<<"' con "<<mayorR<<" pesos \n";
}
//10
void MostrarRecaudacionTotal(int precios[5],int ventas[4][5]){
    int sum = 0;
    for(int i =0; i<4; i++){
        for(int j = 0; j<5;j++){
            sum+=(ventas[i][j]*precios[j]);
        }
    }
    cout<<"La recaudacion total es de "<<sum<<" pesos \n";
}

void MenuOpciones(string sucursales[4], string productos[5], int precios[5], int stock[4][5], int ventas[4][5]){
    
    int respuesta = 0;
    while (respuesta != -1){
        cout<<"Ingrese la opción que desea realizar \n";
        cout<<"1) Mostrar cantidad de unidades vendidas de cada artículo en todas las sucursales \n";
        cout<<"2) Mostrar cantidad de unidades vendidas de cada artículo en una sucursal específica \n";
        cout<<"3) Mostrar cantidad de unidades vendidas de un artículo en específico en una sucursal específica \n";

        cout<<"4) Mostrar cantidad de stock disponible de cada artículo en la sucursal dada \n";
        cout<<"5) Mostrar el stock disponible de todos los artícyulos en cada sucursal \n";
        cout<<"6) Mostrar el stock disponible del artículo indicado en la sucursal dada \n";

        cout<<"7) Mostrar la recaudación total de cada sucrusal \n";
        cout<<"8) Mostrar la sucursal con mayor número de ventas \n";
        cout<<"9) Mostrar la sucursal con mayor recaudación \n";
        cout<<"10) Mostrar la recaudación total en todas las sucursales \n";
        cin>>respuesta;
        switch (respuesta)
        {
        case 1:
            cout<<"\n\n";
            MostrarTodoVentas(sucursales, productos, ventas); //1
            cout<<"\n\n";
            break;
        case 2:
            cout<<"\n\n";
            MostrarVentasSucursalDada(sucursales, productos, ventas);//2
            cout<<"\n\n";
            break;
        case 3:
            cout<<"\n\n";
            MostrarVentaArticuloYSucursalDada(sucursales, productos, ventas);//3
            cout<<"\n\n";
            break;
        case 4:
            cout<<"\n\n";
            MostrarStockSucursalDada(sucursales, productos, stock);//4
            cout<<"\n\n";
            break;
        case 5:
            cout<<"\n\n";
            MostrarTodoStock(sucursales, productos, stock); //5
            cout<<"\n\n";
            break;
        case 6:
            cout<<"\n\n";
            MostrarStockArticuloYSucursalDada(sucursales, productos, stock);//6
            cout<<"\n\n";
            break;
        case 7:
            cout<<"\n\n";
            MostrarRecaudacionSucursales(sucursales, precios, ventas);//7
            cout<<"\n\n";
            break;
        case 8:
            cout<<"\n\n";
            MostrarMayorNumeroVentas(sucursales, ventas);//8
            cout<<"\n\n";
            break;
        case 9:
            cout<<"\n\n";
            MostrarMayorRecaudacion(sucursales, precios, ventas);//9
            cout<<"\n\n";
            break;
        case 10:
            cout<<"\n\n";
            MostrarRecaudacionTotal(precios, ventas);//10
            cout<<"\n\n";
            break;
        case -1:
            cout<<"\n\n";
            cout<<"Hasta pronto\n";
            break;
        default:
        cout<<"Seleccione una opción válida \n";
            break;
        }
    }
    
    
}
int main(){
    string sucursales[4] = {"Primera", "Segunda", "Tercera", "Cuarta"};
    string productos[5] = {"Polera", "Gorros", "Pantalones", "Chalecos", "Chaquetas"};
    int precios[5] = {7000, 10000, 15000, 20000, 25000};
    int stock[4][5] = {{140, 200, 120, 40, 95}, //primera: Poleras, Gorros, Pantalones, Chalecos, Chaquetas
                       {50, 250, 101, 52, 17}, //segunda: ...
                       {120, 90, 12, 28, 93}, // tercera: ...
                       {70, 92, 12, 127, 55}}; // cuarta: ...

    int ventas[4][5] = {{120, 100, 200, 42, 20}, //primera: Poleras, Gorros, Pantalones, Chalecos, Chaquetas
                       {50, 70, 12, 48, 20}, //segunda: ...
                       {20, 17, 55, 25, 33}, // tercera: ...
                       {70, 42, 32, 57, 45}}; //cuarta: ...
    MenuOpciones(sucursales, productos, precios, stock, ventas);
    
}