// 116A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, out;
    int sum = 0, in = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> out;
        sum = (a + in) - out;
        if (sum < 0)
            in = 0;
        else
            in = sum;
    }
    cout << sum;
}