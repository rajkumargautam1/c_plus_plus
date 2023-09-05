#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    v.push_back(10);

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    v.push_back(20);

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    v.push_back(30);

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    v.push_back(40);

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    v.push_back(50);

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;
    

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "<<endl;
    }

    for(int x : v){
        cout<<x<<" "<<endl; 
    }

    for(auto it=v.begin(), end=v.end(); it !=end; it++){
        cout<<*it<<" ";
    }

    v.pop_back();
    cout<<endl;

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    for(auto x : v){
        cout<<x<<" "<<endl;
    }

    v.clear();
   

    cout<<"size :"<<v.size()<<endl;
    cout<<"capcity :"<<v.capacity()<<endl;

    v.empty() ? cout<<"true, vector is empty"<<endl:
                cout<<"false, vector is empty"<<endl;
     

}  