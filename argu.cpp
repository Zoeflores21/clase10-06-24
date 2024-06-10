#include <iostream>
using namespace std;
int main ( int argc, char*argv[]){

    cout << "argumentos de entrada: " << argc << "\n";
    
    for (int i=0; i<argc; i++)
    {
        cout << argv[i] << "\n";
    }
}