#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100], n;

    cout<<"Digite el numero de elementos que va a tener el arreglo: ";
    cin>>n;

    for(int i=0; i<n;i++){
        cout<<"Digite el elemento "<<(i+1)<<": ";
        cin>>numeros[i]; //Guardando los elementos del vector
    }

    cout<<"\nARREGLO: \n";
    //Ahora hay que mostar los elementos con sus indices asociados

    for(int i=0;i<n;i++){
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    cout<<"\n";

    getch();
    return 0;
}