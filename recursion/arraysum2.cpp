#include<bits/stdc++.h>
using namespace std;
int f(int* arr, int i){
    // base case 
    if(i == 0){
        return arr[0];
    }
    //recursive case

    //compute the sum of elements in x[o...i]
    //1. ask your friend to compute the sum of elements in x[0...i-1]

    int a =f(arr, i-1);
    return arr[i] +a;

}
int main(){
    int n;
    cin>>n; 

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<f(arr,n-1)<<endl;
    return 0;
}