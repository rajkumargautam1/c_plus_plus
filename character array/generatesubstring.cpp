#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int n=str.size();
   
    

    for(int l=1; l<=n; l++){

        cout<<l<<endl;

        for(int i=0; i<=n-l; i++){

            string substring=str.substr(i, l);  ////this syntax extract the substring  
             cout<<substring<<endl; 
        }
        cout<<endl;

        
    }
}