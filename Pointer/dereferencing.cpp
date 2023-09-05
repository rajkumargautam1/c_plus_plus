#include <iostream>
using namespace std;
int main(){
    int y=10;
    int *yptr=&y;

    cout<<"yptr="<<yptr<<endl;
    yptr++;
    

    cout<<"yptr= "<<yptr <<endl;
    yptr++;
    cout<<" yptr= "<< yptr <<endl;
    return 0;
}