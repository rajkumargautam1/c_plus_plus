#include <iostream>
using namespace std;
int main(){
    int *p=nullptr;
    int *q=0;
    int *r=NULL;

    cout<<p<<" "<<q<<" "<<r<<" "<<endl;

    if(p ==q){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }

    if(q == r){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }

    if(r == p){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }
}