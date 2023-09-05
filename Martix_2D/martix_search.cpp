#include<bits/stdc++.h>
using namespace std;
bool martixsearch(int arr[][100], int m , int n ,int t){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == t){
                
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n,m,t;
    cin>>n>>m>>t;

    int arr[100][100];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    martixsearch (arr, m, n, t) ? cout<<t<<" found"<<endl:
                                  cout<<t<<" not found"<<endl;  

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

