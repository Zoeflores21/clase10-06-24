#include <iostream>
using namespace std;
int main (int argc, char*argv[]){

    int x;
    int*apuntador = &x;
    cout <<"ingrese un numero entero: ";
    cin>>*apuntador;
    delete[]apuntador;
    apuntador = NULL;
    cout << "usted ingreso el numero: " << x <<endl;
    cout << "usted ungreso el numero: "<< &apuntador <<endl;
    
    return 0;
}