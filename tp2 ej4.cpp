#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> numeros(10);
    cout<<"Ingrese 10 numeros:";
    for (int i = 0; i < 10; i++) {
        cin>>numeros[i];
    }

    int maximo = numeros[0];
    int minimo = numeros[0];

    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    cout<<"Valor maximo:"<<maximo<<endl;
    cout<<"Valor minimo:"<<minimo<<endl;

    return 0;
}

