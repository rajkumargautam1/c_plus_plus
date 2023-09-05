#include<iostream>

using namespace std;

int f(int* x, int n, int t, int i) {

	
	if (i == n) {
		
		return -1;
	}

	
	if (x[i] == t) {
		return i;
	}

	

	return f(x, n, t, i + 1);

}

int main() {

    int x[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }

	int t; 
    cin>>t;

	cout << f(x, n, t, 0) << endl;

	return 0;
}