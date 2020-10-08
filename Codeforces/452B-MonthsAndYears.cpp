#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define p 1000000007

// https://codeforces.com/contest/899/problem/B

int main()
{
 	int n;
 	cin >> n;
 	
 	int A[n];
 	for(int i=0;i<n;i++)
 	{
 		cin >> A[i];
 	}
 	
 	int pos1[24] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
 	int pos2[24] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
 	
 	bool b1=false;
 	bool b2=false;
 	
 	for(int i=0;i<24;i++)
 	{
 		bool b=true;
 		for(int j=0;j<n;j++)
 		{
 			int d1=A[j];
 			int d2=pos1[(i+j)%24];
 			if(d1!=d2)
 				b=false;
 		}
 		b1 = b1 | b;
 	}
 	
 	for(int i=0;i<24;i++)
 	{
 		bool b=true;
 		for(int j=0;j<n;j++)
 		{
 			int d1=A[j];
 			int d2=pos2[(i+j)%24];
 			if(d1!=d2)
 				b=false;
 		}
 		b2 = b2 | b;
 	}
 	
 	if(b1 || b2)
 		cout << "YES";
 	else
 		cout << "NO";
}