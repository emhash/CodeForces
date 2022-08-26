// 158B
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, temp = 0;
    cin >> n;
    int input_u[1000];
    int i = 0;
    for (i ; i < n; i++)
    {
        cin >> input_u[i];
    }
    for (int x = 0; x < n; x++)
    {
        // cout << " value "<< input_u[x] << endl;
        if (input_u[x] >= 1 && input_u[x] <= 4)
        {
            temp += input_u[x];
        }
    }
    float x , temp1 , temp2;
    x = temp / 4;
    temp1 = x + 0.9;
    string go;
    if (temp1 > 1 && temp1 < 2)
    {
        temp2 = temp1 + 1;
        go = to_string(temp2);
        // cout << go[0]<<endl;
        cout<<go[0];
    }
    // else{
    //     cout<<go[0]<<endl;
    // }

    return 0;
}