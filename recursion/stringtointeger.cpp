#include<bits/stdc++.h>
using namespace std;

int f(string str, int n){

//base case
if(n==1){
    return str[0]-'0';
}
 
//recursive case

string substring =str.substr(0, n-1);

int a= f(substring ,n-1);

char ch= str[n-1];
return a*10+(ch-'0');

}
int main(){

    string str;

    cin>>str;

    int n=str.size();
    int x=f(str, n);

    cout<<x<<endl;

}