#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={{10,20,30,40},
                    {50,60,70,80},
                    {90,10,110,120}};
    // cout<< arr[1][2]<<endl;
    // cout<< *((arr+1)+2)<<endl;

    // arr[1][2] = *((arr+1) +2)

    cout<< *(*(arr+1))<<endl;

}