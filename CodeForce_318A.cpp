#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, ans1, ans2;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        ans1 = n / 2;
    }
    else
    {
        ans1 = (n / 2) + 1;
    }
    if (k <= ans1)
    {
        ans2 = (2 * k) - 1;
    }
    else
    {
        ans2 = (k - ans1) * 2;
    }

    cout << ans2 << endl;

    return 0;
}


// # # ========================= TRIED python below code but runtime error.
// # n = int(input())
// # k = int(input())
// # temp = n
// # num = []
// # if k >= 1 and k<=n and n >= k and n <= 10e12:
// #     for p in range(1, temp+1):
// #         if p % 2 != 0:
// #             ele = p
// #             num.append(ele)
// #     # print(num)
// #     for op in range(1, temp+1):
// #         if op % 2 == 0:
// #             ele = op
// #             num.append(ele)
// #     # print(num)

// #     print(num[k-1])
// # else :
// #     exit(0)


// # +=++=++=++==== Had to use C++ =====^^

