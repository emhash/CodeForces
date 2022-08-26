// 791A

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int limak , bob, y_limak = 3 , y_bob = 2 ,counting = 0;
    // cout <<"limak w = ";
    cin >> limak;
    // cout << "bob w = ";
    cin>>bob;
    if ( limak >= bob )
    {
        cout<<"1"<<endl;
    }
    else{
        for (int i = 0; i < bob; i++)
        {
            limak = limak * y_limak;
            bob = bob * y_bob;
            counting++;
            if (limak > bob)
            {
                cout<<counting<<endl;
                break;
            }
            
        }
        
    }
    
    return 0;
}