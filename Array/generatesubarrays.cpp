#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    for(int i=0; i<=n-1; i++){
       for (int j=i; j<=n-1; j++){
        for(int k=i; k<=n-1; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}