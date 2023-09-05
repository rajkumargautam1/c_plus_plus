#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive value"<<endl;
    cin>>n;

    int i=0;
    while(i<=n){
        i++;
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
}