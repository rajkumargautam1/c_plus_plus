#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[][100], int m, int n, int t)
{
    int  i = 0;
    int j = n - 1;
    while (i < m and j >= 0)
    {
        if (arr[i][j] == t)
        {
            return true;
        }
        else if (t > arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false; 
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int t;
    cin >> t;

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    is_sorted(arr, m, n, t) ? cout << t << "found" << endl :
                                 cout << t << "not found" << endl;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}