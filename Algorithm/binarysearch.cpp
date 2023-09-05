#include <iostream>
using namespace std;
int main (){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){                                             //array input
        cin>>arr[i];
    
    }

    int t;
    cin>>t; 

    int e=n-1;
    int s=0;

    while(s<=e){
        int m=s+((e-s)>>1);
        if(arr[m]==t){
            cout<<m<<endl;
            break;

        }else{
            if(arr[m]>t){
                e=m-1;

            }else{
                s=m+1;
            }
        }
    }

    if(s>e){
        cout<<-1<<endl;
    }
}