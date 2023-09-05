#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"n number"<<endl;
    cin>>n;
    
    int i=1;
    while(i<=n){
        //print spaces 
        int j=1;
        while (j<=n-i){
            cout<<' ';
            j++;
        }
      //print star
        int k=1;
        while (k<=i){
            cout<<"*";
            k++;
        }
    cout<<endl;
    i++;
    }

}