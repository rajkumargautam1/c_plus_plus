#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    // cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int brr[100];
    int m;
    // cout<<"enter the value of n"<<endl;
    cin>>m;

    for(int j=0; j<m;  j++){
        cin>>brr[j];
    }

    int crr[200];

    	int i = 0; // to iterate over arr[]
	int j = 0; // to iterate over brr[]
	int k = 0; // to iterate over crr[]

	while(i < n && j < m) {
		if(arr[i] < brr[j]) {
			crr[k] = arr[i];
			i++;
			k++;
		} else {
			crr[k] = brr[j];
			j++;
			k++;
		}
	}


	while(i < n) { // in the earlier loop, you've exhausted the second array i.e brr[]
		crr[k] = arr[i];
		i++;
		k++;
	}

	while(j < m) {
		crr[k] = brr[j];
		j++;
		k++;
	}

	for(int l=0; l<n+m; l++) {
		cout << crr[l] << " ";
	}

	cout << endl;

	return 0;
}