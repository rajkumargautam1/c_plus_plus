#include<bits/stdc++.h>
using namespace std;
int f(int *x, int n, int t, int i){
    //base case 
    if(i == n){
        return -1;
    }

    //recursive case 


    //search for the index of the first occurnce of the 't' in x[i...n-1]

    if(i == n-1){
        if(x[n-1] == t){
            return n-1;
        }else {
            return -1;
        }
    }
    
    if (x[i] == t){
        // you found the index of the first occuence of the "t "  at index i

        return i;
    }
    return f(x, n,t, i+1 );

    

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

    cout<<f(x,n,t,0)<<endl;

}