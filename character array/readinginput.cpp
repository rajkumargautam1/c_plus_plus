#include<iostream>
#include<cstring>
using namespace std;
void readstring(char str[] , char delimiter='\n'){
    char ch; 
    int i=0;

    while(true){
        ch=cin.get();

        if(ch==delimiter){
            break;
        }
        str[i]=ch;
        i++;

    }
    str[i]='\0';

}
int main(){
    char str[101];

    cout<<"enter the string :";

    // cin>>str;
    // readstring(str, '$');
    
    cin.getline(str, 10,'$');
    cout<<"you've entered :"<<str<<endl;
}  