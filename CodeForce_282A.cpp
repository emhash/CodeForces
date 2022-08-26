// 282A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x = 0;
    string s1 = "X++";
    string s2 = "++X";
    string s3 = "--X";
    string s4 = "X--";

    cin >> n;

    string s;
    while (n--)
    {
        cin >> s;
        if (s == s1 || s == s2)
        {
            ++x;
        }
        else 
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}