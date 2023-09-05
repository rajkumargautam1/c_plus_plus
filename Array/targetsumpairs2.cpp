#include<iostream>
using namespace std; 
int main(){
    int arr[100];
    int n;
    cin>>n;
    int t;
    cin>>t;
     int count=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    for(int i=0; i<=n-2; i++) {
	for(int j=i+1; j<=n-1; j++) { 
        for(int i =0; j=n-1; i<j){
        int sum =arr[i]+arr[j];
        if(sum == t){
            count++;
            i++;
            j++;

        }else if (sum>t){
            j--;

        }else {
            i++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}
    }