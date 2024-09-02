#include <iostream>
using namespace std;

void inverte(int vetor[], int a){
    int aux, x = a-1;
    for(int i = 0; i < (a/2);i++){
        aux = vetor[i];
        vetor[i] = vetor[x];
        vetor[x] = aux;
        x--;
    }

    for(int i = 0;i < a;i++){
        cout << "Posição " << i << ": " << vetor[i] << endl;
    }
}

int main(){
    int a;
    
    cin >> a;
    int vetor [a];
    for(int i = 0;i < a;i++){
        cin >> vetor[i];
    }
    for(int i = 0;i < a;i++){
        cout << "Posição " << i << ": " << vetor[i] << endl;
    }
    cout << endl;

    inverte(vetor, a);
}