#include <iostream>
using namespace std;
int main (){
    int p;
    cout<<"enter the principal amount";
    cin>>p;
    int r;
    cout<<"enter the value of rate";
    cin>>r;
    int t;
    cout<<"enter the value of time";
    cin>>t;

    int si=(p*r*t)/100;
    cout<<si<<endl;

}