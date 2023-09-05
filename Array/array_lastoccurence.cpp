#include <iostream>
using namespace std;
int main (){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int t;
    cin>>t;
    
    for(int i=n-1; i>0; i--){
        if (arr[i]==t){
            cout<<i<<endl;
        }
    }
    // if (arr[i]==n){
    //     cout<<-1<<endl;
    // }
}