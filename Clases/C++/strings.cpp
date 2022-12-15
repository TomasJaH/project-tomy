#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "Tomas Jaramillo";
    char nombre[20];
    
    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');

    cout<<nombre<<endl;

    getch();
    return 0;
}