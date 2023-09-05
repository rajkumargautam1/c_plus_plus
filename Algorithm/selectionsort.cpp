#include <iostream>
using namespace std;
int main (){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){                                             //array input
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        int correct_pos=i;
        int min_idx=i;
    
    for(int j=i+1; j<n; j++){

        if (arr[j]<arr[min_idx]){
            min_idx=j;

        }
    }
        swap(arr[correct_pos] , arr[min_idx]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    
}
