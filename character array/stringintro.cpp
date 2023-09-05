#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str5;
    cin>>str5;
    cout<<str5;
    getline(cin, str5);
    cout<<str5;

    for(int i=0; str5[i] !='\0'; i++){
        cout<<str5[i]<<" ";

    }

    cout<<endl;

    cout<<str5[0]<<endl;
    cout<<str5[1]<<endl;
    cout<<str5[2]<<endl;
    cout<<str5[3]<<endl;
    cout<<str5[4]<<endl;
    
    string str6="new delhi";
    cout<<str6<<endl;
    

    string str3=str6;
    string str4;
    str4=str6;

    cout<<str3<<" "<<str4<<endl;

}