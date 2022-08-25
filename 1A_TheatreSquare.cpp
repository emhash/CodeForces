// A. Theatre Square

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    long long int c, d;
    cin >> m >> n >> a;
    if ((n >= 1 && n <= 1000000000) && (m >= 1 && m <= 1000000000) && (a >= 1 && a <= 1000000000))
    {
        if (m % a == 0) c = m / a;
        else
        {c = (m / a) + 1;}
        if (n % a == 0)
        {d = n / a;}
        else{d = (n / a) + 1;}
        cout << c * d << endl;
    }
    return 0;
}