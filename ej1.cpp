#include<iostream>

using namespace std;

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        cout<<"Ingrese un numero: "<<endl;
        cin>>arr[i];
    }

    for(int j = 0; j < 5; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}