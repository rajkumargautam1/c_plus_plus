#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recusive case
    cout << n << " ";

    // 1. ask your friend to print nos. from 1 to n-1 in the increasing order//

    f(n - 1);
}
int main()
{
    int n;
    cin >> n;
    f(n);

    return 0;
}
