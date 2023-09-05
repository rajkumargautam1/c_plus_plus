#include <iostream>
using namespace std;
bool isprime(int n){
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printprime (int N){
    int cnt=0;
    int n=2;
    while (true){
        if(isprime(n)){
            cout<<n<<" "<<endl;
            cnt++;
            if(cnt==N){
                break;
            }
        }
        n++;
    }
}
int main(){
    int N;
    cin>>N;

    printprime(N);
    return 0;
}