#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();

    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; j++){
            for(int k=i; k<=j; k++){
                cout<<str[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
}