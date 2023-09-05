#include<bits/stdc++.h>
using namespace std;
int main(){
    
    forward_list<int> l1;
    cout<<"size ="<<distance(l1.begin(), l1.end())<<endl;

    //insert data at the head
    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);


    cout<<"size ="<<distance(l1.begin(), l1.end())<<endl;

    //acess the element at the head

    cout<<"head ="<<l1.front()<<endl;

    //iterate over the forward_list using iterator
    
    for(auto it =l1.begin(), end = l1.end(); it!=end; it++){
        cout<<*it<<" ";

    }
    cout<<endl;

    //iterate overforward list using for each loop 

    for(int x: l1){
        cout<<x<<" ";

    }
    cout<<endl;

    //remove data at the head

    l1.pop_front();
    l1.pop_front();

    cout<<"size ="<<distance(l1.begin(), l1.end())<<endl; 

    for(auto it =l1.begin(), end = l1.end(); it!=end; it++){
        cout<<*it<<" ";

    }
    cout<<endl;

    l1.clear();
    cout<<"size ="<<distance(l1.begin(), l1.end())<<endl; 
    



}