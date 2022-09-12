// 1591 A
#include <bits/stdc++.h>
using namespace std;
int a[101];
void treeplant(){
  int tc;
  cin>>tc;
	int tree=1;
	a[0]=1;
	for (int i=1;i<=tc;i++)cin>>a[i];
	for (int i=1;i<=tc;i++){
		if (a[i]==0 && a[i-1]==0){
			cout<<"-1\n";
			return;
		}
		if (a[i]==1){
			if (a[i-1]==1 && i!=1)tree+=5;
			else tree++;
		}
	}
	cout<<tree<<"\n";
}
int main(){
  int t;
  cin>>t;
  for (int z=0;z<t;z++)
  {treeplant();}
  return 0; 
}