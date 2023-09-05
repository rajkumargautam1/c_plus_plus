#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[100][100];

    for(int i=0; i<m; i++) {
		// read values in the ith row of the given 2D array
		for(int j=0; j<n; j++) {
			// read value in the (i, j)th cell or jth column of the ith row
			cin >> arr[i][j];
		}
	}
    for(int j=0; j<n; j++) {
		if(j%2 == 0) {
			// jth column is an even column
			for(int i=0; i<m; i++) {
				cout << arr[i][j] << " ";
			}
		} else {
			// jth column is an odd column
			for(int i=m-1; i>=0; i--) {
				cout << arr[i][j] << " ";
			}
		}
	}	
}