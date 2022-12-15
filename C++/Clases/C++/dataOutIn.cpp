#include <iostream>

using namespace std;

int main(){
    int numero;
    float decimal;
    char letra;
    string palabra;

    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"\nDigite un decimal: ";
    cin>>decimal;
    cout<<"\nEscriba una sola letra: ";
    cin>>letra;
    cout<<"\nEscriba una palabra: ";
    cin>>palabra;
    cout<<"\nEl numero que digito fue: "<<numero<<"\nEl decimal que digito fue: "<<decimal<<"\nLa letra que escribio fue: "<<letra<<"\nEl mensaje que escribio fue: "<<palabra<<endl;

    return 0;
}