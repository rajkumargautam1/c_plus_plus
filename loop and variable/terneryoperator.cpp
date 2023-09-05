#include <iostream>
using namespace std;
int main(){

    int marks;
    cout<<"enter the marks"<<endl;
    cin>>marks;

    // if(marks>40){
    //     cout<<"pass"<<endl;
    // }else {
    //     cout<<"fail"<<endl;
    // }

    marks>40?cout<<"pass": cout<<"fail"<<endl;


}