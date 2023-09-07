#include<bits/stdc++.h>
using namespace std;
void f(int *a, int n){
    stack<int> s;
    vector<int> out;
    for(int i=0; i<n; i++){

        while(!s.empty() and s.top() <= a[i]){
            s.pop();
        }
        if(s.empty()){
            // cout<<-1<<" ";
            out.push_back(-1);
        }else{
            // cout<<s.top()<<" ";
            out.push_back(s.top());
        }
        s.push(a[i]);
    }
    // reverse(out.begin(), out.end());

    for(int i=0; i<out.size(); i++){
        cout<<out[i]<<" ";
        // cout<<endl;

    }
   
}
int main(){
    int a[]={5,2,0,4,1,3,6};
    int n= sizeof(a)/sizeof(int);

    f(a,n);


    return 0;

}