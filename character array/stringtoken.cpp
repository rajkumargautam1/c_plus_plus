#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char str[]="abc.def.ghi";
    char dlim[]=".";

    char* token =(char*)strtok(str, dlim);
    while(token !=NULL){
        cout<<token<<endl;
        token =strtok(NULL, dlim);
    }

}