#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese la cantidad de elementos:";
    cin>>n;

    vector<int> vec(n);
    cout<<"Ingrese los "<<n<<"valores:";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        vec[i] = vec[i]*2;
    }

    cout<<"Valores duplicados:";
    for (int i = 0; i < n; i++) {
        cout<<vec[i]<<" ";
    }

    return 0;
}

