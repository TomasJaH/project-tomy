#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct colegio{
    char nombre[40];
    int edad;
    float nota_final;
}alumnos[100];

int main(){

    int n, aux=0;
    float max=0;

    cout<<"Ingrese el numero de alumnos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        rewind(stdin);
        cout<<"\nAlumno "<<i+1<<": "<<endl;
        cout<<"Ingrese el nombre: ";
        cin.getline(alumnos[i].nombre,40,'\n');
        cout<<"Ingrese la edad: ";
        cin>>alumnos[i].edad;
        cout<<"Ingrese la nota final de este: ";
        cin>>alumnos[i].nota_final;
    }

    for(int i=0;i<n;i++){
        if(alumnos[i].nota_final>max){
            max = alumnos[i].nota_final;
            aux = i;
        }
    }

    cout<<"\nEl estudiante "<<alumnos[aux].nombre<<" fue el que saco la mejor nota con: "<<alumnos[aux].nota_final<<endl;



    getch();
    return 0;
}