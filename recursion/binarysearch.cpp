#include<bits/stdc++.h>
using namespace std;
int f(int* x, int t ,int s, int e ){
    //base case
    if(s>e){
        return -1;
    }
    //recursive case

    //search for the "t" in x[s..e]

    int m=s+(e-s)/2;
    if(x[m]== t){
        return m;

    }else if(t<x[m]){
        return (x,t,s,m-1);
    }else{
        return f(x,t, m+1,e);
    }
}
int main(){
    int n;
    cin>>n;

    int x[100];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    int t;
    cin>>t;

    cout<<f(x,t, 0, n-1)<<endl;
}