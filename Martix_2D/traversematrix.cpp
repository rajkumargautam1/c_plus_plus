#include<bits/stdc++.h>
using namespace std;

void printDiagonal(int mat[][100], int m, int n, int i, int j) {
	int diagonalLength = min(m-i, n-j);
	for(int k=0; k<diagonalLength; k++) {
		cout << mat[i+k][j+k] << " ";
	}
}

void traverse(int mat[][100], int m, int n) {

	for(int i=m-1; i>=0; i--) {
		// print the diagonal starting at the (i, 0)th index
		printDiagonal(mat, m, n, i, 0);
	}

	for(int j=1; j<n; j++) {
		// print the diagonal starting at the (0, j)th index
		printDiagonal(mat, m, n, 0, j);
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
    traverse(mat , m,n);

    return 0;


}