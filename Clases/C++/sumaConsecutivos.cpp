#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int n, suma = 0;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        suma += i;
    }

    cout<<"La suma es de: "<<suma<<endl;

    getch();
    return 0;
}