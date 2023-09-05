#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int csum[101];
    csum[0]=0;
    for(int i =1; i<n; i++){
        csum[i]=csum[i-1]+arr[i-1];
    }
    for(int i=0; i<n; i++){
        cout<<csum[i]<<" ";

    }
    cout<<endl;
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=csum[j+1]-csum[i];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    cout<<endl;
    return 0;
}