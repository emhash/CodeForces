// 118A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string x, y, z;
    cin >> x;
    if (x.size() >= 1 && x.size() <= 100)
    {
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U' || x[i] == 'y' || x[i] == 'Y')
            {
                continue;
            }
            else
            {
                z += '.';
                z += tolower(x[i]);
            }
        }
    }
    cout << z << endl;

    return 0;
}