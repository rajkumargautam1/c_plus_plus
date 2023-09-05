#include<bits/stdc++.h>
using namespace std;
void generateoutcomes(int n,char* out, int i,int j){
    //base case

    if(i==n){
        //you made a decision for  each if the each coins "n"
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }

    //recursive case 

    // make a descision for the ith coin

    // ith coin can be heads
    if(i==0 || out[j-1] !='H'){
    out[j]='H';
    generateoutcomes(n, out, i+1, j+1);

    }
    // ith coins can be tails
    out[j]='T';
    generateoutcomes(n, out, i+1, j+1);


}
int main(){
    int n;
    cin>>n;

    char out[10];

    generateoutcomes(n,out,0,0);
}