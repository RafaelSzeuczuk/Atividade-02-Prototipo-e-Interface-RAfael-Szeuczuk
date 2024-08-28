#include<iostream>
using namespace std;

double calcularAreaRetangulo(double, double);

int main(){
    double comp, larg;
    cout<<"Digite o comprimento e a largura do triangulo: "<<endl;
    cin>>comp>>larg;
    cout<<"A area desse triangulo eh de: "<<calcularAreaRetangulo(comp,larg)<<endl;
}

double calcularAreaRetangulo(double comprimento, double largura){
    return(comprimento*largura/2);
}
