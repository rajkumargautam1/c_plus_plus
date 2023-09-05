#include <iostream>
#include<cmath>
using namespace std;
int main (){
    int n;
    cout<<"enter the number ";
    cin>>n;

    int i=1;
    while (i<=n){
            //print spaces 
            int j=1;

            while (j<=n-i){
                cout<<' ';
                j++;
            }

            //print stars
            int k=1;
          
               while(k <= i){
                    cout<<"*";
                    k++;
               }

            //print star 

            int l=1;
            while (l<=i-1)
            {
                cout<<"*";
                l++;
            }
            
        cout<<endl;
        i++;
    }
}