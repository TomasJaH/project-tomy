#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "Esto es una cadena", palabra2[] = " de ejemplo.", palabra3[100];

    strcat(palabra3,palabra); //palabra3 = "Esto es una cadena"
    strcat(palabra3,palabra2); //palabra3 = "Esto es una cadena de ejemplo." Lo que hace es añadir al final lo que pongamos.

    cout<<palabra3<<endl;
    
    getch();
    return 0;
}