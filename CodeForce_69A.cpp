// 69A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, x, y, z, x_in_sum=0, y_in_sum=0, z_in_sum=0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        x_in_sum += x;
        y_in_sum += y;
        z_in_sum += z;
    }

    if (x_in_sum == 0 && y_in_sum == 0 && z_in_sum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}