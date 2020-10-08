#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define p 1000000007

// https://codeforces.com/contest/899/problem/D

ll digits(ll n)
{
	ll x=0;
	while(n!=0)
	{
		x++;
		n/=10;
	}
	return x;
}

ll count(ll sum, ll n)
{
	ll c = 2*n - sum + 1;
	c /= 2;
	if(c>((sum-1)/2))
		c=(sum-1)/2;
	else if(c<0)
		c=0;
		
	return c;
}

ll pow10(ll d)
{
	ll ans=1;
	while(d--)
	{
		ans*=10;
	}
	return ans;
}

int main()
{
 	ll n;
 	cin >> n;
 	
 	ll sum_max = (2*n)-1;
 	ll max_d = digits(sum_max);
 	
 	if(sum_max+1 != pow10(max_d))
 		max_d -= 1;
 	
 	if(max_d==0)
 	{
 		cout << (n*(n-1))/2;
 		return 0;
 	}
 	
 	ll num = pow10(max_d);
 	ll sum = 0;
 	for(int i=1;i<=9;i++)
 	{
 		ll pos = i*num-1;
 		sum += count(pos,n);
 		//cout << count(pos,n) << " ";
 	}
 	
 	cout << sum;
}