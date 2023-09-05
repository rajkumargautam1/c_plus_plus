#include <iostream>
using namespace std;
int add(int w, int x, int y=0, int z=0 ){
    return w+y+z+x;
}
int main(){
    cout << add(1,2) <<endl;
    cout << add (1,2,3) <<endl;
    cout << add (1,2,3,4) <<endl;

}