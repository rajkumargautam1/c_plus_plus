#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the natural number"<<endl;
    cin>>n;

    int i=1;                                        //intallisation of loop
    while (i<=n){
        int j=1;                                    //installation of second loop 
            while(j<=i){
                cout<<"*";                          //body of the loop
                j++;
            }



        cout<<endl;
        i++;

    }


}