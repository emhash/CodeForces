// NextRound
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, position, z = 0;
    cin >> n;
    cin >> position;
    int y[100];
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    // cout<<y[position];
    for (int i = 0; i < n; i++)
    {
        if (y[i] > 0 && y[i] >= y[position - 1])
        {
            z++;
        }
    }
    cout << z << endl;
    return 0;
}