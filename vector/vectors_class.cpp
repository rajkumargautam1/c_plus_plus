#include<bits/stdc++.h>
using namespace std;
class customer {

	double credits;

public:

	string name; 
	int age;
	char gender;
	
	
	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}	


	double getCredits() {
		return credits;
	}
};

bool mycomparator(customer c1, customer c2){
    // return c1.age<c2.age;

    return c1.getCredits() < c2.getCredits();

}
int main(){
    vector<customer> v;

    // customer c("raj", 22, 'm', 100);
    // v.push_back(c);

    v.push_back(customer("raj", 22, 'm', 100));
    v.push_back(customer("rohan", 19, 'm', 10000));
    v.push_back(customer("rahul", 12, 'm', 400));
    v.push_back(customer("ravi", 52, 'm', 500));

    sort(v.begin(), v.end(), mycomparator);

    for(customer c: v){
        cout<<c.name<<" : "<<c.getCredits() <<endl;
    }

    // for(int i=0; i<v.size(); i++){ 
    //     cout<< customer[i]<<" ";
    // }

}