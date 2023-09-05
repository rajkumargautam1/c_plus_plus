#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the non-negtive value ";
    cin>>n;

    int p;
    cout<<"enter the precions value"<<endl;
    cin>>p;
    double inc=1;
    double sq=0;
    
    int i=0;
    while (i<=p){
        while (sq*sq<=n){
        sq=sq+inc;
    }
        sq=sq-inc;
        inc=inc/10;
        i++;
    }
    cout<<"print square root"<<sq<<endl;
}