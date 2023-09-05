#include<iostream>
#include <cstring>

using namespace std;
void stringconcat(char* str1, char* str2){
    int i=strlen(str1);
    int j=0;
    while (str2[j] != '\0'){
        str1[i]=str2[j];
        i++;
        j++;

    }
    str1[i]='\0';
}
int main(){
    char str1[101] = "hello";
    char str2[]="world";

    cout<<"before concat :"<<str1<<endl;
    // stringconcat(str1, str2);
    strcat(str1, str2);
    
    cout<<"after concat :"<<str1<<endl;

    return 0;
}