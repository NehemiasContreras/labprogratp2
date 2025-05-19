#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<float> alturas(5);
    float suma = 0;

    cout<<"Ingrese la altura de 5 personas:";
    for (int i = 0; i < 5; i++) {
        cin>>alturas[i];
        suma += alturas[i];
    }

    float promedio = suma/5;
    int masaltos = 0, masbajos = 0;

    for (int i = 0; i < 5; i++) {
        if (alturas[i] > promedio) {
            masaltos++;
        } else if (alturas[i] < promedio) {
            masbajos++;
        }
    }

    cout<<"Promedio de alturas: "<<promedio<<endl;
    cout<<"Personas mas altas: " << masaltos << endl;
    cout<<"Personas mas bajas:"<<masbajos<<endl;

    return 0;
}

