#include<iostream>
#include<algorithm>
using namespace std;

bool mycomparator(int a, int b){
	string str_a= to_string(a);
	string str_b= to_string(b);

	string x= str_a +str_b;
	string y= str_b +str_a;

	return x>y;
}

int main() {
	int t;
	cin>>t;
	int n;
	cin>>n;

	int arr[100000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	// sort(arr, arr + n);
    sort( arr, arr+n, mycomparator);
    for(int i=0; i<n; i++) {
		cout << arr[i];
	}
	
	return 0;
}