// 41A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;
    string one, two, three, four;
    cin >> one >> three;
    int y = one.length();
    int ny = y;
    int counter = 0;
    while (ny > counter)
    {
        ny--;
        two += tolower(one[ny]);
    }
    for (int i = 0; i < y; i++)
    {
        four += tolower(three[i]);
    }
    if (two == four)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}