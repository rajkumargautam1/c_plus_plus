#include<bits/stdc++.h>
using namespace std;
string f(string str){
    // base case
    if(str == ""){
        return str;
    }

    //recursive case
    char temp =str[0];
    string substring =str.substr(1);

    //1. ask your friend to move all the 'x' character to the end of the given succesful;

    string substringfrommyfriend =f(substring); 
    if(temp == 'x'){
        return substringfrommyfriend+temp;
    }else{
          return temp +substringfrommyfriend;

    }

}
int main(){
    string str;
    cin>>str;

    cout<<f(str)<<endl;
}