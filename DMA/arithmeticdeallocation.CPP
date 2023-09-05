#include<bits/stdc++.h>
using namespace std;
int *f(){ 
    // int x=10;
    // return &x;

    int* ptr=new int;
    return ptr;
}
int main(){
    int * xptr=f();
    // cout<<*xptr<<endl;
    return 0;
}