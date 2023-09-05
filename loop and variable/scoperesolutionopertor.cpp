#include <iostream>
using namespace std;

int x=250;
int main(){
    int x=100;
    cout<<"print the value of x: "<<x<<endl;

    cout<<"print the global variable: "<< ::x <<endl;

    return 0;
}