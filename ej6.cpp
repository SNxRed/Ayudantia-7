#include<iostream>

using namespace std;

int main(){
    int arr[3][3];
    int columna, suma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"ingrese un numero: "<<endl;
            cin>>arr[i][j];

        }
        
    }
    cout<<"Ingrese la columna: "<<endl;
    cin>>columna;
    for(int i = 0; i < 3; i++){ 
            suma =arr[i][columna - 1] + suma;
        
    }

    cout<<"La suma de las columnas "<<columna<<" es: "<<suma<<endl;

    return 0;
}