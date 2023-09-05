#include <iostream>
#include <cstring>
using namespace std;

void copystring(char* str1, char*str2){
    int i=0;
    int j=0;
     while (str2[j] !='\0'){
        str1[i]=str2[j];
        i++;
        j++;
     }
     str1[i]='\0';
}

int main(){
    char str1[100]="hello";
    char str2[]="wow";

    cout<<"before copy:"<<str1 <<endl;

    // copystring(str1, str2);
    
    strcpy (str1, str2);
    cout<<"after copy:" <<str1 << endl;
    return 0;
     
}