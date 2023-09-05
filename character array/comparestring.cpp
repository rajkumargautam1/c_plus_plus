#include <iostream>
#include <cstring>
using namespace std;

int stringcompare(char* str1 , char* str2){
    int i=0;
    int j=0;
    while(str1[i] !='\0' and str2[j] !='\0'){
        if(str1[i]>str2[j]) {
            return 1;
        }else if (str1[i]<str2[j]){
            return-1;
        }else{
            i++;
            j++;
        }
    }

    if (str1[i] !='\0' and str2[j] !='\0'){
        return 0;
    }else if (str1 [i]=='\0'){
        return -1;  
    }
    return 1;
 
}

int main(){

    char str1[101];
    char str2[102];

    cin.getline(str1, 101);
    cin.getline(str2, 101);

    // int out
    // stringcompare(str1, str2);
   
    int out= strcmp(str1 ,str2);


    if(out==0){
        cout<<str1<<"is equal to "<<str2<<endl;
    }
    else if (out>0){
        cout<<str1<<"is greater than"<<str2<<endl;

    }
    else {
        cout<<str1<<"is less than "<<str2<<endl;
    }
}