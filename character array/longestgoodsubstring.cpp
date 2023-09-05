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
       getline(cin, str);
       int n=str.size();
       
        int max_len=0;
        int s_index;

       for(int i=0; i<n ; i++){ 
        
            for(int j=i; j<n; j++){
                string substring =str.substr(i, j-i+1);
                if(isgoodstring(substring)){

                    max_len =max(max_len, j-i+1);
                    // if(j-i+1 >max_len){
                    //     max_len =j-i+1;
                    //     s_index=i;
                    // }
                }
            }
       }
    //    cout<<str.substr(s_index, max_len);

       cout<<max_len<<endl;
     
}