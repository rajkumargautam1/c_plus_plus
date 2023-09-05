#include<iostream>
using namespace std;
void myswap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=20;
    int b=30;

    swap(a,b);

    cout<<"a: "<<a<<"  b: "<<b<<endl;

    myswap(a,b);

    cout<<"a: "<<a<<"  b: "<<b<<endl;


}