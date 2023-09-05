#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> v;
    // vector<vector<int>> v;

    // vector<vector<int>> v(3, vector<int>(4));
    // int m=v.size();
    // int n=v[0].size();

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // vector<vector<int>> v(3, vector<int>(4,1));

    // int m=v.size();
    // int n=v[0].size();

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    vector<vector<int>> v={{1,2,3},
                            {4,5,6},
                            {7,8,9}};
 
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;


}