#include<iostream>

using namespace std;

int f(int* x, int t, int i) {


	if (i == -1) {
		return -1;
	}


	if (x[i] == t) {
		return i;
	}

	

	return f(x, t, i - 1);

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

	cout << f(x, t, n - 1) << endl;

	return 0;
}