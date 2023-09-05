#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int brr[1000];
  

    brr[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        brr[i]=arr[i]+brr[i-1];
}


    for(int i=0; i<n; i++){
    cout<<brr[i]<<" ";
    }

}
