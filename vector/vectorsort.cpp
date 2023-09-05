#include<bits/stdc++.h>
using namespace std;
bool mygreatercomparator(int a, int b){
    // if(a>b){
    //     return true;
    // }else{
    //     return false;
    // }

    return a>b;
}
int main(){
    // vector<int> v={1,0,2,4,5};

    // cout<<"size :"<<v.size()<<endl;
    // cout<<"capcity :"<<v.capacity()<<endl;

    // int n=v.size();

    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // reverse(v.begin(), v.end());

    // for(int i=0; i<v.size(); i++){ 
    //     cout<<v[i]<<" "<<endl;
    // }

    // reverse(v.begin(), v.begin()+3);

    // for(int i=0; i<v.size(); i++){ 
    //     cout<<v[i]<<" "<<endl;
    // }

    // sort(v.begin(), v.end());

    // for(int i=0; i<n; i++){
    //     cout<< v[i] <<" " <<endl;
    // }


    vector<int> v2={30,20,52,62,5,65,6,58};

    // sort(v2.rbegin(), v2.rend());
    //     for(int i=0; i<v2.size(); i++){
    //         cout<< v2[i] <<" ";
    //     }

    //     cout<<endl;
    

    // sort(v2.begin(), v2.end(), greater<int>());
    //     for(int i=0; i<v2.size(); i++){
    //         cout<< v2[i] <<" "; 
            
    //     }
 
    //     cout<<endl;

        sort(v2.begin(), v2.end(), mygreatercomparator);
        for(int i=0; i<v2.size(); i++){
            cout<< v2[i] <<" ";

        }
    

        cout<<endl;
    

}