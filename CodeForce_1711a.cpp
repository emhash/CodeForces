#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void looping (int num){
    for (int i = 1; i < num; i++){
        cout<<" ";
        cout<<i;
    }
    cout<<endl;
    }
void input(int ar[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
}
void output(int arrr[] , int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<arrr[i]<<endl;
        looping(arrr[i]);
    }
}
int main(){
    int n,i=0;cin>>n;
    int emparr[n];
    input(emparr , n);
    output(emparr , n);
    return 0;
}