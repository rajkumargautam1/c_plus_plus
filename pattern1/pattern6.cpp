#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    while(i<=n){
        //print the spaces 
        int j=1;
        while (j<=n-i){
            cout<<" ";
            j++;

        }
        // print the number
        int num=i;
        int k=1;
        while (k<=i){
            cout<<num;
            num++;
            k++;
          
        }
        i++;
        cout<<endl;
       
    }
}