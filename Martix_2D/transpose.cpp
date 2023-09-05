#include<bits/stdc++.h>
using namespace std;
void transpose (int arr[][100], int m , int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                swap(arr[i][j] ,arr[j][i]); 
            }
        }
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

  

    cout<<endl<<endl;

    transpose(arr,m, n);


    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}  