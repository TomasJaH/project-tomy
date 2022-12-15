#include <iostream>

using namespace std;

int main(){
    float nota1,nota2,nota3,nota4,promedio;

    cout<<"Calculadora promedio de 4 alumnos"<<endl;
    cout<<"Escriba la nota final del primer alumno: "; cin>>nota1;
    cout<<"Escriba la nota final del segundo alumno: "; cin>>nota2;
    cout<<"Escriba la nota final del tercer alumno: "; cin>>nota3;
    cout<<"Escriba la nota final del cuarto alumno: "; cin>>nota4;

    promedio = ((nota1+nota2+nota3+nota4)/4);

    cout<<"\nEl promedio de los 4 alumnos es de: "<<promedio<<endl;

    return 0;
}