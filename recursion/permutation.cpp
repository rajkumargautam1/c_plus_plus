#include<bits/stdc++.h>
using namespace std;
void generatepermutations (char* inp, int n, int i){
    // base case 

    if(i==n){
        cout<<inp <<endl;
        return;
    }

    // recursive case 

    // generate the permutations of inp[i....n-1]


    // make a decision for the ith position

    for(int j=i; j<=n-1; j++){
        swap (inp[i], inp[j]);
        generatepermutations(inp,n, i+1);
        swap(inp[i], inp[j]);
    } 
}
int main(){
    int n;
    cin>>n;
    char inp[n];
    for(int i =0; i<n; i++){
        cin>>inp[i];
    }

    cout<<endl;
    

 
    generatepermutations(inp, n, 0);
}