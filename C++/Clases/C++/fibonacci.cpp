#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int n, x = 0, y = 1, z = 1;

    cout<<"Ingrese el largo de la cadena de Fibonacci: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }


    getch();
    return 0;
}