/*
definir uma função que recebe um vetor de inteiros e um inteiro n e retorna a quantidade de vezes que n aparece no vetor



*/

#include <iostream>
using namespace std;

int conta(int v[], int n, int tam){
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] == n){
            cont++;
        }
    }
    return cont;
}

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << conta(v, 5, 10) << endl;
    return 0;
}

// Path: aulas/aula3.cpp

