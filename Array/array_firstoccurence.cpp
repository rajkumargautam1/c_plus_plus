#include <iostream>
using namespace std;
int main (){
    int arr[5];
    int n; 
    cin>>n;

    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    int t;
    cin>>t;

    for(int i =0; i<n; i++){
        if(arr[i]==t){
        cout<<i<<endl;
        break;
        }
    }
    // if(t==i){
    //     cout<<-1<<endl;
    // }
}