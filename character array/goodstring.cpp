#include<iostream>
using namespace std;
bool isgoodstring(string str){
        for(int i=0; i<str.size(); i++){
            char ch=str[i];
            if(!(ch == 'a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u')){
                return false;

            }
        }
        return true;
}
int main(){
    string str;
    cin>>str;
    
    isgoodstring(str) ? cout << str << " is a good string" << endl :
	                    cout << str << " is not a good string" << endl;
}