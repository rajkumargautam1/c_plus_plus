#include <bits/stdc++.h>
using namespace std;
string spellingmap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void f(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive case

    // 1. ask your friend to print the spelling of (n/10);
    f(n / 10);

    int d = n % 10;
    cout << spellingmap[d] << " ";
}
int main()
{
    int n;
    cin >> n; 

    f(n);

    return 0;
}