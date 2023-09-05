#include<bits/stdc++.h>
using namespace std;
void f(int n, char src, char helper, char dst)  {
    // base case 

    if(n == 0){
        return;
    }

    //recursive case


    //1.ask your friend to move n-1 disks from 'a' to 'b' using 'c'
    f(n-1, src,dst,helper);


    //2. move disk from "a" to "c"
    cout<<"move disk from "<<src<<" to "<<dst<<endl;


     //3. ask your friend to move n-1 disks from "b" to "c" using "a"
    f(n-1, helper,src,dst);

}
int main(){

    int n;
    cin>>n;
    f(n, 'a','b','c');  
    return 0;

}