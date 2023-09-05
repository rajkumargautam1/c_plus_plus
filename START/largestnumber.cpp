#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;                                      
    cout<<"enter the value of n";
    cin>>n;
   

    int lsf=INT_MIN;
    int i=0;
    while (i<n){
        // read the value from the user 

      int data;
      cout<<"enter the value numbers";
      cin>>data;

      // compare the value 

        if(data>lsf){
            lsf=data;
        }
 
       // increment the value
 
        i++;
    }
    cout<<lsf<<endl;


}