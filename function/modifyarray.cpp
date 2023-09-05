#include <iostream>
using namespace std;

void modify (int arr[] , int n){
    for(int i=0; i<n; i++){
        arr[i]++;
    }
} 

int main(){

    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<endl;

    modify(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}