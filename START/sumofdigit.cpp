#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;

    int sum=0;
    while (n>0){
        //extract the rightmost digit
        int digit=n%10;
        sum=sum+digit;
        n=n/10;

    }
    cout<<sum<<endl;
    return 0;


}