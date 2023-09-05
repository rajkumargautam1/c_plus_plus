#include <iostream>
using namespace std;
int main (){

 int arr[5];
	  int n;
     cout << "Enter the value of n : ";
     cin >> n;
	 for(int i=0; i<n; i++) {
	 	cin>> arr[i];
	 }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

     }

     cout<<endl;

     for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
     }



}