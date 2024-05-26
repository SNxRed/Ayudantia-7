#include<iostream>

using namespace std;

int main(){
    int arr[5];
    int x;
    for(int i = 0; i < 5; i++){
        cout<<"Ingrese un numero: "<<endl;
        cin>>arr[i];
    }
    
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;

    for(int j = 0; j < 5; j++){
        if(arr[j] == x){
            cout<<"Si esta en el arreglo y esta en la posicion: "<<j<<endl;

        }else{
            cout<<"No esta en el arreglo"<<endl;
        }
       
    }
    return 0;
}