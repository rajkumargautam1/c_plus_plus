#include <iostream>
using namespace std;
int main(){
    int arr[100];

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    int k;
    cin>>k;

    while (k--){
        int temp=arr[n-1];

    

    for(int i=n-1; i>=1; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;



}