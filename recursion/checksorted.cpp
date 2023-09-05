#include<iostream>
using namespace std;
bool f(int* x, int n, int i){
    //base case 
    if(i== n-1){
        return true;
    }
    // recursive case 
    

    //check if x[i....] is sorted

    return x[i]<x[i+1] and f(x,n,i+1);
}

int main(){
    int n;
    cin>>n;

    int x[100];
    for(int i=0; i<n; i++){
        cin>>x[i];

    }
    f(x,n,0) ? cout<<"sorted"<<endl:
                cout<<"not sorted"<<endl;
}