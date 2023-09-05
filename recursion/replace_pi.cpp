#include<bits/stdc++.h>
using namespace std;
void replacepi(char* inp,int i){

    //base case

    if(inp[i]=='\0'){
        return;
    }


    if(inp[i] == 'p' and inp[i+1] =='i'){


        int j=i+2;
        while(inp[j] != '\0'){
            j++;

        }
        while(j>=i+2){
            inp[j+2] = inp[j];
            j--;
        }

        inp[i]='3';
        inp[i+1]='.';
        inp[i+2]='1';
        inp[i+3]='4';

        replacepi(inp, i+4); 
    }else{
        replacepi(inp, i+4);

    }

} 
int main(){
   
    int n;
    cout << "Enter the number of characters you want to input: ";
    cin >> n;

    char inp[n];
    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> inp[i];
    }

    replacepi(inp, 0);

    cout<<inp<<endl;





}      