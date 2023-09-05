#include <bits/stdc++.h>
using namespace std;
int *resize(int *a, int c)
{
    cout << "resizing from"
         << c * sizeof(int) << "b to"
         << 2 * c * sizeof(int) << "B" << endl;

    int *b = new int[2 * c];
    for (int i = 0; i < c; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    return b;
}
int main()
{
    int *a = new int[1];

    int c = 1;
    int i = 0;

    int x;
    while (true)
    {
        cout << ">>";
        cin >> x;

        if (x < 0)
        {
            break;
        }
        if (i == c)
        {
            resize(a, c);
            c = c * 2;
        }

        a[i] = x;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;

    return 0;
}