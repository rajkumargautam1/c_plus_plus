#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        int num=i;
        while(k<=i){
            cout<<num;
            num++;
            k++;

        }
        num = num-2;
		int l = 1;
		while(l <= i-1) {
			cout << num << " ";
			l++;
			num--;
        }
       
        cout<<endl;
        i++;

    }
}