#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define p 1000000007

// https://codeforces.com/contest/899/problem/C

int main()
{
 	ll n;
 	cin >> n;
 	
 	ll sum=(n*(n+1))/2;
 	
 	if(sum%2==0)
 		cout << 0 << endl;
 	else
 		cout << 1 << endl;
 		
 	sum /= 2;
 	
 	vector<ll> sol;
 	for(ll i=n;i>=1;i--)
 	{
 		if(sum>=i)
 		{
 			sum -= i;
 			sol.push_back(i);
 		}
 		else
 			break;
 	}
 	
 	if(sum!=0)
 		sol.push_back(sum);
 		
 	cout << sol.size() << " ";
 	for(ll i=0;i<sol.size();i++)
 	{
 		cout << sol[i] << " ";
 	}
}