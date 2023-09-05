#include <iostream>
using namespace std;
int main (){

    int n;
    cout<<"enter the value of n ";
    cin>>n;

    if(n==0 || n==1){
        cout<<n<<endl;
    }else {
        int a=0;
        int b=1;

        while (true){
            int c=a+b;
            if(c==n){
                cout<<"true";
                break;

            }
            if (c>n){
                cout<<"false"<<endl;
                break;
            }
            a=b;
            b=c;
        }
    }
    return 0;
}