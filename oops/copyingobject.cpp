#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    char name[100];
    int age;
    char gender;
    double credits;

    customer(){
        cout<<"i am inside the default constructor of the customer class"<< endl;

    }

    customer(char*n , int a, char g , double c){
        cout<<"i am inside the parameterised constructor of the customer class"<<endl;
        strcpy(name, n);
        age = a;
        gender = g;
        credits =c; 

    }
    void printcustomerinfo(){
        cout<<"customer information "<<endl;  
        cout <<"name :"<<name<<endl;
        cout<<"age : "<<age <<endl;
        cout<<"gender :"<<gender <<endl;
        cout<<"credits :"<<credits << endl;

    }
};
int main(){
    customer c1("naruto", 32, 'm',5000);
    customer c2=c1;         //COPY CONSTRUCTOR

    c2.printcustomerinfo();
    
    customer c3;            //DEFAULT CONSTRUCTOR

    c3=c1;                  //COPY ASSIGNMENT OPERATOR

    c3.printcustomerinfo();

    return 0;
}