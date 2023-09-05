#include<iostream>
using namespace std; 
int main(){
    int arr[100];
    int n;
    cin>>n;
    int t;
    cin>>t;
     int count=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    } 
  
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]+ arr[j]==t){
                count++;
            
            }

        }
    }
    cout<< count <<endl;
    return 0;

}