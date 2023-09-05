#include <iostream>
using namespace std;
int main (){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){                                             //array input
        cin>>arr[i];
    }

    for(int i=1; i<=n-1; i++){                                          // one pointer start from 0 to n-1
        bool flag=true;                                                //ASSume 
        for(int j=0; j<n-i; j++){                                      //second pointer start from 0 to n-i
            if(arr[j] > arr[j+1]){                                       //arr[0] and arr[1] greater then swap both 
                swap(arr[j] , arr[j+1]);                                          
                    flag=false;                                        //flag false 
                
            }
        }

        if(flag){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";                                                               //array print
    }

    cout<<endl;



}