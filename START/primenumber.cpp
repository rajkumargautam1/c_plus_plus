#include <iostream>
using namespace std;
int main (){
    int n;                                               
    cin>>n;

    int i=2;                                               
    while (i<=n-1){                                            
        if(n%2==0){                                             
            cout<<"this is not a prime number";
            return 0;
        }
        i++;

    }
    
    cout<<"this is a prime number"<<endl;;

}