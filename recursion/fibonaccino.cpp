#include<bits/stdc++.h>
using namespace std;
int f(int n){
    //base case
    // if(n==0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }

    if(n==0 || n==1){
        return n;
    }

    //recusive case

    // 1. ask your friend to the value of(n-1)th fibonacci

    int a= f(n-1);

    //2. ask your friend to compute the value of the (n-2)th fibonacci no.
    int b=f(n-2);
    return a+b;

} 
int main(){
    int n;
    cin>>n; 

    cout<<f(n)<<endl;
}