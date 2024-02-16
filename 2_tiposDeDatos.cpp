#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //Datos de tipo entero
    //El tipo de dato SHORT permite almacenar numeros hasta el 32.767 positivo y negativo, es mas ligero que INT
    short num = 32767;
    cout<<"El valor de num es "<<num<<"\n";

    //El tipo INt (igual a python) ocupa mas espacio que SHORT pero tiene un limite superior a short, alrededro de 2.000.000.000
    int num2 = 400000;
    cout<<"El valor de num es "<<num2<<"\n";
    //Para datos aum mayores se usa long o long long. La desventaja es que pesan mucho mas en la memoria. Deben finalizar con L o LL
    long num3 = 1234567890L;
    cout<<"El valor de num3 es "<<num3<<"\n";
    long long num4 = 987654321012345LL;
    cout<<"El valor de num4 es "<< num4<<"\n";

    //Datos de tipo float
    //Float. Tiene una precision de 7 digitos decimales y 7 enteros
    float num5 = 3.12345;
    cout<<"El valor de num5 es "<< num5<<"\n";
    //Para mas decimales se usa DOUBLE, que tiene una precision de 15 digitos decimales y 15 digitos enteros (comunmente utilizado), Se debe usar la libreria iomanip y el comando serprecision() 
    double num6 = 3.123456789;
    cout<<setprecision(10);
    cout<<"El valor de num6 es "<< num6<<"\n";
    //Para datos aun mayores o precisos se usa long double, cuya precision dependera del compilador y el uso, pero es mayor que las anteriores

    //Datos de tipo bolleano
    //bool, booleano como cualquier otro. Ojo, que se imprime 0 para false y 1 para true
    bool flag = true;
    cout<<"El valor de flag es "<< flag<<"\n";

    //Datos de tipo string
    //char. Debe ser puesto en comillas simples. Funciona en ASCII
    char cadena[] = "Esto es una cadena de texto";
    cout<<"El valor de cadena es "<< cadena<<"\n";
    return 0;
}