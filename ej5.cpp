#include<iostream>

using namespace std;

int main(){
    int arr[3][3];
    float suma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"ingrese un numero: "<<endl;
            cin>>arr[i][j];

        }
        
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){  
            suma =arr[i][j] + suma;
        }
    }

    cout<<"El promedio es: "<<suma/9<<endl;

    return 0;
}