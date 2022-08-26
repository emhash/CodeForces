// 159A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int countlow = 0, countuper = 0;
    string X;
    cin >> X;
    for (int i = 0; i < X.size(); i++)
    {
        if (isupper(X[i]))
        {
            countuper++;
        }
    }
    for (int i = 0; i < X.size(); i++)
    {
        if (islower(X[i]))
        {
            countlow++;
        }
    }

    if (countuper < countlow || countlow == countuper)
    {
        char ch;
        for (int i = 0; i < X.size(); i++)
        {
            ch = tolower(X[i]);
            cout << ch;
        }
    }

    else if (countuper > countlow)
    {
        char ch;
        for (int i = 0; i < X.size(); i++)
        {
            ch = toupper(X[i]);
            cout << ch;
        }
    }

    return 0;
}