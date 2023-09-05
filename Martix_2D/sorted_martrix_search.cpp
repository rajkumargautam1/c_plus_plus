#include<bits/stdc++.h>
using namespace std;
bool martixsearch(int arr[][100], int m, int n, int t){
    for(int i=0; i<m; i++){
        if(binary_search(arr[i], arr[i+1], t)){
            return true;

        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int  m;
    cin>>m;
    int t;
    cin>>t;

    int arr[100][100];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            
        }       
    }
    martixsearch(arr, m,n,t) ? cout<<t<<"found"<<endl:
                               cout<<t<<"not found"<<endl;


    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
          
            
        }
        
    }
}