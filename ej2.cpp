#include<iostream>

using namespace std;

int main(){
    int arr[5];
    int suma;
    for(int i = 0; i < 5; i++){
        cout<<"Ingrese un numero: "<<endl;
        cin>>arr[i];
    }

    for(int j = 0; j < 5; j++){
        suma =arr[j] + suma;
    }
    cout<<"La suma de todos los elementos es: "<<suma<<endl;
    return 0;
}