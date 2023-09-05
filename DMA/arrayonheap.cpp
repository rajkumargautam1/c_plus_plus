#include<bits/stdc++.h>
using namespace std;
int main(){

    int *ptr=new int[4];


    // *ptr=10;
    // *(ptr+1)=20;
    // *(ptr+2)=30;
    // *(ptr+3)=40;

    // ptr[0]=10;
    // ptr[1]=20;
    // ptr[2]=30;
    // ptr[3]=40;

    for(int i=0; i<4; i++){
        cin>>ptr[i];
    }
    for(int i=0; i<4; i++){
        cout<<ptr[i]<<" ";
    }

    delete [] ptr;
}