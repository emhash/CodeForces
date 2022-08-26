// 150A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int M, N;
    cin >> M >> N;
    if (M >= 1 && N <= 16)
    {
        // M = M * x;
        // N = N * y;
        int z = (M * N) / 2;
        cout << z << endl;
    }
    return 0;
}
