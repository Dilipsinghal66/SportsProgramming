#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define p 1000000007

// https://codeforces.com/contest/899/problem/A

int main()
{
 	int t;
 	cin >> t;
 	
 	int a=0,b=0;
 	while(t--)
 	{
 		int x;
 		cin >> x;
 		
 		if(x==1)
 			a++;
 		else
 			b++;
 	}
 	
 	int m=min(a,b);
 	a-=m;
 	b-=m;
 	
 	int ans=m+(a/3);
 	
 	cout << ans;
}