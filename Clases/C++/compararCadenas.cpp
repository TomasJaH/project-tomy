#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra1[100];
    char palabra2[100];

    cout<<"Ingrese la primera palabra: ";
    cin.getline(palabra1,100,'\n');

    cout<<"Ingrese la segunda palabra: ";
    cin.getline(palabra2,100,'\n');

    if(strcmp(palabra1,palabra2)==0){  //Cuando strcmp(x,y) es igual a 0 significa que son iguales
        cout<<"Las palabras son iguales"<<endl;
    }else if (strcmp(palabra1,palabra2) == 1) { //cuando strcmp(x,y) = 1 significa que X esta primero en el alfabeto que Y, pero si es -1 es viceversa
        cout<<"Las palabras son distintas y "<<palabra1<<" esta despues alfabeticamente que "<<palabra2<<endl;
    } else {
        cout<<"Las palabras son distintas y "<<palabra2<<" esta despues alfabeticamente que "<<palabra1<<endl;
    }

    getch();
    return 0;
}