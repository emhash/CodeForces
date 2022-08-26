//96A

#include<iostream>
#include <string.h>
#include<algorithm>
using namespace std;
int main()
{
    int i, o, p = 0;
    char n[1000];
    cin>>n;
    o = strlen(n);//This is how cahrecter array length can be found
    for (i = 0; i < o - 6; i++)
    {
        if (n[i] == '0' && n[i + 1] == '0' && n[i + 2] == '0' && n[i + 3] == '0' && n[i + 4] == '0' && n[i + 5] == '0' && n[i + 6] == '0')
        {
            p = 7;
            break;
        }
        if (n[i] == '1' && n[i + 1] == '1' && n[i + 2] == '1' && n[i + 3] == '1' && n[i + 4] == '1' && n[i + 5] == '1' && n[i + 6] == '1')
        {
            p = 7;
            break;
        }
    }
    if (p == 7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
