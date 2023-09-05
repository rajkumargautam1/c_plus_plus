#include <iostream>
using namespace std;
int main(){

    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int t;
    cin>>t;

    bool flag=false;  //assume "target" is not present in the array

    for ( int i=0; i<n; i++){
        if (arr[i] == t ){
            cout<<i<<" ";
        
        }
       
    }

     if(!flag){
        cout<<-1<<endl;
    }

}