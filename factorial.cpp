#include <iostream>
using namespace std;
int fact(int n);
int main(){

    int n;
     cout <<"ingrese un numero entero: "; cin >>n;
     cout <<"el factorial de " <<n << "es" << fact(n) << "\n";


    return 0;
}

int fact(int n){
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else 
    {
        res = 1;
        for (int i =1; i <= n; i++)
        {
            res = res * i;
        }
    }


    return res;
}