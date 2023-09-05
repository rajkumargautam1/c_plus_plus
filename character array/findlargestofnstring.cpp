#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    char inp[101];
    char lsf[101];

    cin>>inp;
    // cin.getline(inp, 101);
    strcpy(lsf, inp);

    for(int i=1; i<=n-1; i++){

        cin>>inp;
        if(strcmp(inp, lsf)>0){
            strcpy(lsf, inp);
        }
    }

    cout<< lsf << endl;




    
}