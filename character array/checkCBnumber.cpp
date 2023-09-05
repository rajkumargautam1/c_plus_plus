#include<iostream>
using namespace std;
int primes[] = {2, 3, 5, 7, 11, 13, 17, 23, 29};
bool iscbnumber(string str){
    long long num=stoll(str);

    if(num == 0 || num == 1 ){
        return false;
    }
    for(int i=0; i<9; i++)
    {
        if(num == primes[i] ){
            return true;
        }
    }
    for(int i=0; i<9; i++){
        if(num%primes[i] == 0){
            return false;
        }
    }
    return true; 
} 
int main(){

    string str ="991";
iscbnumber(str) ? cout << str <<" is a cb number " << endl:
                  cout << str <<" is not a cb number" << endl;

}