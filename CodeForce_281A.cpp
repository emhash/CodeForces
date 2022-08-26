// 281A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// have make capital the first latter . rest will same
int main()
{
    string inp, newV;
    cin >> inp;
    if (inp.length() <= 1000)
    {
        newV = toupper(inp[0]);
        for (int i = 1; i < inp.size(); i++)
        {
            newV += (inp[i]);
        }
        cout << newV;
    }
    return 0;
}