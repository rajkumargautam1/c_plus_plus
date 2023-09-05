#include <bits/stdc++.h>
using namespace std;
class customer{
public:
    char name[100];
    int age;
    char gender;
    double credits;

    customer() {
        cout<<"i am inside the default constrctor of the customer class"<<endl;
    }

    customer(char*n, int a, char g, double c){
        
        cout<<"i am inside the parmetrized constructor of customer class"<<endl;
        strcpy(name, n);
        age = a;
        gender= g;
        credits =c;
    }
+
    void printcustomerinfo()
    {
        cout << "customer information " << endl;
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "gender :" << gender << endl;
        cout << "credits :" << credits << endl;
    }

 
};

int main()
{

    
   customer c("naruto", 32 ,'m' ,500);
   
   c.printcustomerinfo();

    return 0;
}