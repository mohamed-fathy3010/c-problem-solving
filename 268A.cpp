#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, sol = 0;
    cin>> n;
    pair<int,int> x[n];

    for (int i = 0; i < n; i++)
    {
        cin>>x[i].first >> x[i].second;
    }
    
    for(int i =0 ;i <n ; i++)
    {
        for( int j = 0 ;j < n ;j++)
        {
            if(i != j && x[i].first == x[j].second)
            sol++;
        }
    }
    cout << sol <<endl;
    return 0;
}