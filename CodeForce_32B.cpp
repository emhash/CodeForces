// 32B

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string inp_s;
    cin >> inp_s;
    if (inp_s.length() >= 1 && inp_s.length() <= 200)
        for (int i = 0; i <= inp_s.size(); i++)
        {
            if (inp_s[i] == '.')
            {
                cout << "0";
            }
            if (inp_s[i] == '-')
            {
                if (inp_s[i + 1] == '.')
                {

                    cout << "1";
                }

                else
                {
                    cout << "2";
                }
                i++;
            }
            
        }
}
