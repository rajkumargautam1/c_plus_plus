#include<bits/stdc++.h>
using namespace std;
void spirallymatrix(int arr[][100], int n, int m){
    int sr=0;
    int er=m-1;
    int sc=0;
    int ec=n-1;

    while (sr<=er and sc<=er){
        for(int j=sc; j<=ec; j++){
            cout<<arr[sr][j]<<" ";
           
        }
        sr++;
        for( int i=sr; i<=er; i++){
            cout<<arr[i][ec]<<" ";
        }
        ec--;

        for(int j=ec; j>=sc; j--){
           cout<<arr[er][j]<<" ";
        }
        er--;
        for(int i=er; i>=sr; i--){
            cout<<arr[i][sc]<<" ";
        }
        sc++;

    }
}
int main(){
    int n,m;
    cin>>n>>m;
   
    int arr[100][100];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    spirallymatrix(arr, m, n);
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
}