#include<bits/stdc++.h>
using namespace std;

void sortDiagonal(int mat[][100], int m, int n, int i, int j) {
	int diagonalLength = min(m-i, n-j);
	int diagonal[100];

    for(int k=0; k<diagonalLength; k++){
        diagonal[k] = mat[i+k][j+k];
    } 
    sort(diagonal ,diagonal+diagonalLength);
    for(int k=0; k<diagonalLength; k++ ){
        mat[i+k][j+k]=diagonal[k];
    }
}

void sorted(int mat[][100], int m, int n) {

	for(int i=m-1; i>=0; i--) {
		// print the diagonal starting at the (i, 0)th index
		sortDiagonal(mat, m, n, i, 0);
	}

	for(int j=1; j<n; j++) {
		// print the diagonal starting at the (0, j)th index
		sortDiagonal(mat, m, n, 0, j);
	}

}

int main(){
    int m,n;
    cin>>m>>n;

    int mat[100][100];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
        cout<<endl;
    }
    sorted(mat , m,n);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat [i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;


}