#include <iostream>
using namespace std;
bool iseven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    bool ans;

    ans=iseven(2);

    ans ? cout << "true" << endl :
	      cout << "false" << endl;

    ans=iseven(3);
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    cout<<iseven(4)<<endl;
    cout<<iseven(5)<<endl;
    

}