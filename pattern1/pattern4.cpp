#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;

    int i=1;

    while (i<=n){
        int j=1;
        int num= i%2==0 ? 0:1;
        while (j<=i){
            cout<<num<<" ";
            num=!num;
            j++;
           
        }
        cout<<endl;
        i++;

    }
}