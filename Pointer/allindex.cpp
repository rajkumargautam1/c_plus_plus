#include<iostream>
#include<vector>

using namespace std;



vector<int> indices;

void f(int* x, int n, int t, int i) {

	

	if (i == n) {
		return;
	}

	
	if (x[i] == t) {
		indices.push_back(i);
	}


	f(x, n, t, i + 1);

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


	f(x, n, t, 0);

	if (indices.empty()) { // indices.size() == 0
		cout << -1 << " ";
	} else {
		for (int index : indices) {
			cout << index << " ";
		}
		cout << endl;
	}

	return 0;
}