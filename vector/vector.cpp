#include<bits/stdc++.h>
using namespace std;



int main(){

    //fill 
    vector<int> v(5,10);
    for(int i=0; i<v.size(); i++){
        cout<< v[i] <<" ";
        
    }

    cout<<endl;

    //copy constructor
    vector<int> v2=v;
    for(int i=0; i<v.size(); i++){
        cout<< v2[i] <<" ";
        
    }

    cout<<endl;


    //copy assignment opertor

    vector<int> v3;
    v3=v;
    for(int i=0; i<v.size(); i++){
        cout<< v3[i] <<" ";
        
    }

    cout<<endl;


    //range constructor

    vector<int> v4 ={1,2,3,4,5};
    for(int i=0; i<v.size(); i++){
        cout<< v4[i] <<" ";
        
    }

    cout<<endl;

    vector<int> v5(v4.begin()+2, v4.end());
    for(int i=0; i<v.size(); i++){
        cout<< v5[i] <<" ";
        
    }
    cout<<endl;






}