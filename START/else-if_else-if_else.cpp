#include<iostream>
using namespace std;
int main (){
    int marks;
    cout<<"enter the marks ";
    cin>>marks;

    if(marks>90){
        cout<<"grade A"<<endl;

    }else if(marks > 80){
        cout<<"grade B"<<endl;

    }else if (marks >60){
        cout<<"grade C"<<endl;
    }else {
        cout<<"grade D"<<endl;
    }
}