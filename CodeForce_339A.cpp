#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, j;
    for (i = 0; i < s.size(); i += 2)
    {
        // cout<<"using i "<<s[i]<<endl;
        for (j = 0; j < s.size() - 1; j += 2)
        {
            // cout<<"using j : "<<s[j]<<endl;
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }
    cout << s << endl;
}