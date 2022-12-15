#include <iostream>
#include <math.h> //libreria necesaria para elevar y raiz y otras funciones maatematicas

using namespace std;

int main(){

    double a,b,c, x1 = 0, x2 = 0;

    cout<<"Calculadora de la formula del bachiller"<<endl;
    
    cout<<"Introduzca el valor de a: "; cin>>a;
    cout<<"Introduzca el valor de b: "; cin>>b;
    cout<<"Introduzca el valor de c: "; cin>>c;

    x1 = ((-b + sqrt(pow(b,2)-(4*a*c)))/(2*a));
    x2 = ((-b - sqrt(pow(b,2)-(4*a*c)))/(2*a));

    cout.precision(4);
    cout<<"\nEl primer valor de X es: "<<x1<<endl;
    cout<<"El segundo valor de X es: "<<x2<<endl;

    return 0;
}