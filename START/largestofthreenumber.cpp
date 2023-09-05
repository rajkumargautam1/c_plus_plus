#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first value";
    cin>>a;

    int b;
    cout<<"enter the second value";
    cin>>b;

    int c;
    cout<<"enter the third value";
    cin>>c;

    if(a>b and a>c){
        cout<<"a is largest"<<endl;
    }else if (b>c){
        cout<<"b is largest "<<endl;
    } else{
        cout<<"c is largest "<<endl;
    }

    cout<<"your are the outside the loop"<<endl;



}