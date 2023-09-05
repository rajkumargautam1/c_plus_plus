#include<iostream>
#include<cstring>
using namespace std;
void reversestring(char* str){
    int i=0; 
    int j=strlen(str)-1; 
    while(i<j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
}



int main(){
    char str[]="hello";
    cout<<"original string: "<<str<<endl;

    // reversestring(str);
    strrev(str);
    cout<<"reversed string after 1st reverse:"<<str<<endl;  


    return 0;
}