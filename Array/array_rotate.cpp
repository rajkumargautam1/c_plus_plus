#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }

    int temp=arr[n-1];

    // shift all the value from the 0th index to {n-2} index step to the right

    for(int i=n-1; i>=1; i--){
        arr[i] =arr[i-1];
    }

    arr[0]=temp;


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }



}