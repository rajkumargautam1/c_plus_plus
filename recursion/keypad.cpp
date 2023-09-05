#include <bits/stdc++.h>
using namespace std;
string keypad[]={"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
void generatewords(char* inp, char* out, int i , int j){
    //base case
    if(inp[i]== '\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }

    //recursive case

    // generate the words for inp[i...n-1]


    //decide the digit at the ith index , that which character it is mapped to 
    int d =inp[i]-'0';
    if(d==0 || d==1){
        generatewords(inp,out, i+1,j);
        return;
    }
    string option=keypad[d];
    for(char c_k: option){
        out[j]= c_k;
        generatewords(inp, out, i+1, j+1);
    }


}
int main(){
    char inp[]="23";
    char out[10];

    generatewords(inp, out, 0,0);


} 