// 110A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s;
    int c1 = 0, c2 = 0, c3 = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '7')
        {
            c1++;
        }

        else if (s.at(i) == '4')
        {
            c2++;
        }
    }
    // cout << c1 << endl
    //      << c2 << endl;
    c3 = s.length();
    int x = c1 + c2;

    // cout<<"x is = "<<x<<endl;
    if (x == 4 || x == 7)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}