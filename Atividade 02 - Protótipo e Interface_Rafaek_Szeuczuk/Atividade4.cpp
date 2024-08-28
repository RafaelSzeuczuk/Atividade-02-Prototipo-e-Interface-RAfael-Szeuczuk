#include<iostream>
using namespace std;
int global=2;//variavel global
void mudar_global(){
        if (global>=2){
            global=3;//modificando a variavel local
        }
}

int main(){
    int local=8;//variavel local
    mudar_global();
    cout<<local<<endl//imprimindo a variavel local
        <<global<<endl;//imprimindo a variavel global
    return 0;
}
