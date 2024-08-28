#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int aleat();

int main(){
    cout<<"Número inteiro aleatório entre 1 e 100: "<<aleat()<<endl;
}

int aleat()
    {
        unsigned seed = time(0);
        srand(seed);

        return (1 + rand() %100);
    }