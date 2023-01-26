#include "bits/stdc++.h"
using namespace std;

int main() {
	int n,h,temp,res = 0;
	cin>> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		(temp > h) ? res +=2 : res ++;
	}
	 cout << res;
}