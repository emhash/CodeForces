// 271A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    
    if (year >= 1000 && year <= 9000)
    {
        
        for (int i = 0; i < 9000; i++)
        {
            year +=1;
            string s = to_string(year);

            if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
            {

                cout << s << endl;
                break;
            }
            
        }
    }
}