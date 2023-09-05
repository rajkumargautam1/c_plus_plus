#include<bits/stdc++.h>
using namespace std;
int f(int x, int y){
    //base case
   if( y==0){
     //compute the product of x and y(0)
     return 0;
   }

    //recusive case

    // 1. ask your friend to compute the product of x and y-1 i.e add x, y-1 times
        int a = f(x, y-1);
        return x + a;
    
    

} 
int main(){
    int x,y;
    cin>> x ;
    cin>> y ;

    cout<<f(x,y)<<endl;


}
