#include<bits/stdc++.h>
using namespace std;
int f(int*arr, int n, int i){
    // base case
    // if(i==n-1){
    //     return arr[n-1];
    // }

    if(i == n){
        return 0;
    }
    //recursive case

    //comppute the sum of element in x[i...n-1]


    // compute the sum of element in x[i...n-1]
     int a=f(arr, n ,i+1);


     return arr[i]+a;


}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    cout<<f(arr,n,0)<<endl;

}