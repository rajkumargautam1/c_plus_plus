#include <iostream>
#include <cmath>

using namespace std;
float computeareaoftriangle(int b , int h){
    return 0.5*b*h;
}
float computeareaoftriangle(int a, int b,int c){
    float s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
cout << computeareaoftriangle (3,4)<<endl;
cout << computeareaoftriangle (3,4, 5)<<endl;

return 0;


}