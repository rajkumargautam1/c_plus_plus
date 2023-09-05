#include <bits/stdc++.h>
using namespace std;
class customer
{
public:
    char name[100];
    int age;
    char gender;
    double credits;

    void printcustomerinfo()
    {
        cout << "customer information " << endl;
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "gender :" << gender << endl;
        cout << "credits :" << credits << endl;
    }

    customer(){
        cout<<"i am inside the default constrctor of the customer class"<<endl;
    }
};
// void printcustomerinfo(customer c){
//     cout<<"customer information "<<endl;
//     cout<<"name :"<<c.name<<endl;
//     cout<<"age :"<<c.age<<endl;
//     cout<<"gender :"<<c.gender<<endl;
//     cout<<"credits :"<<c.gender<<endl;

// }
int main()
{
    customer c1;

    c1.age = 19;
    c1.gender = 'M';
    c1.credits = 100;
    strcpy(c1.name, "raju");

    // printcustomerinfo(c1);
    c1.printcustomerinfo();
    // cout<<"customer information "<<endl;
    // cout<<"name :"<<c1.name<<endl;
    // cout<<"age :"<<c1.age<<endl;
    // cout<<"gender :"<<c1.gender<<endl;
    // cout<<"credits :"<<c1.credits<<endl;

    customer c2;

    c2.age = 20;
    c2.gender = 'f';
    c2.credits = 100;
    strcpy(c2.name, "megha");

    // cout<<"customer information "<<endl;
    // cout<<"name :"<<c2.name<<endl;
    // cout<<"age :"<<c2.age<<endl;
    // cout<<"gender :"<<c2.gender<<endl;
    // cout<<"credits :"<<c2.credits<<endl;

    // printcustomerinfo(c2);
    c2.printcustomerinfo();
    return 0;
}