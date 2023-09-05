#include <iostream>
using namespace std;

int computesum(int arr[], int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
 int arr[5];
 int n;
 cin>>n;
 for(int i=0; i<=n; i++){
    cin>>arr[i];
 }
 cout<< computesum(arr,n)<<endl;
}