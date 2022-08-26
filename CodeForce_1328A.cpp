#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x;cin>>x;
    while (x--)
    {
        cin>>a>>b;int temRem = a%b;
        if (temRem == 0){cout<<"0"<<endl;}
        else{cout<<b-temRem<<endl;}
    }
    return 0;
}