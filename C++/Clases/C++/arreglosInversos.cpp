#include <iostream>
#include <conio.h>

using namespace std;

int main(){

int numeros[100], n;

cout<<"Digite el numero de elementos del arreglo: ";
cin>>n;

for(int i=0; i<n; i++){
    cout<<"Digite el elemento numero "<<i<<": ";
    cin>>numeros[i];
}

cout<<"\nArreglo Original: \n";

for(int i=0; i<n; i++){
    cout<<numeros[i]<<" ";
}

cout<<"\n\nArreglo invertido: \n";

for(int i=(n-1); i>=0; i--){
    cout<<numeros[i]<<" ";
}
    getch();
    return 0;
}