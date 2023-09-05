#include<bits/stdc++.h>
using namespace std;
int main(){
    int* ptr=new int(200);
    // *ptr=10;
    // (*ptr)++;
    cout<<*ptr<<endl;
    delete ptr;   // to avoid memory leak
    ptr=new int;
    *ptr =50;
    cout<<*ptr<<endl;
    return 0; 

}