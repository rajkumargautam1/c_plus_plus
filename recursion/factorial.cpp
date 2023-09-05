#include<bits/stdc++.h>
using namespace std;
int f(int n){
    //base case
    if(n==0){
        return 1;
    }


    //recursive case


    // 1. ask you are friend to compute (n-1)!

        int a=f(n-1);
        return n*a;


}
int main(){
    int n;
    cin>>n;

    cout<<f(n)<<endl;

}