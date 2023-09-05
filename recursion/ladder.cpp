#include<bits/stdc++.h>
using namespace std;
int countnumberofways(int n, int k, int i,string out){
    //base case 
    if(i==n){
        cout<<out<<endl;
        return 1;

    }
    if(i>n){
        return 0;
    }
    ///recursive case

    // decide while standing at the ith step, the size of your next jump4

    int count=0;
    for(int j=1; j<=k; j++){
        // if(i+j<=n){
        // // take a jump of j to each the (i+j)step from the ith steps

        // count +=countnumberofways(n,k,i+j);
        // }else {
        //     break;
        // }
        count += countnumberofways(n,k,i+j,out+to_string(j));
    }
    return count;

}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<endl;
    string out;

    cout<<countnumberofways(n,k,0,out)<<endl; 
}