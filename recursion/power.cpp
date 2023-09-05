#include <bits/stdc++.h>
using namespace std;
// int f(int x, int y)
// {
    // base case
    //  if(y == 0){
    //      return 1;
    //  }
    //  //recursive case

    // //ASK your friend to compute the value of x^(y-1)

    // int a=f(x,y-1);
    // return x*a;
    int f2(int x, int y)
    {
        // base case

        if (y == 1)
        {
            return x;
        }

        // recursive case

        int a = f2(x, y/2);

        if(y%2 == 0){
            return a*a;

        }else{
            return a*a*x;

        }
    }

    int main()
    {
        int x, y;
        cin >> x >> y;

        // cout<<f(x,y)<<endl;
        cout << f2(x, y) << endl;
        return 0;
    }