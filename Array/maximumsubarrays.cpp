#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i  = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxsum=INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            if(sum>maxsum){
                maxsum=sum;

        }
    }
    cout<<"maximum subarray sum :" <<maxsum<<endl;
    return 0;
}
}