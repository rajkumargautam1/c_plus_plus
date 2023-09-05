#include <iostream>
using namespace std; 
int main(){
     int arr[100];
     int n;
     cin >>n; 
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int num=0; num<(1<<n); num++){
        for(int k=0; k<n; k++){
            if((num>>k)&1){
                cout<< arr[k] <<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}