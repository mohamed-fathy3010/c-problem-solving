#include "bits/stdc++.h"
using namespace std;

int main() {
    int n ,sol = 1;
    cin>>n;
    string s[n];
    cin>>s[0];
    for(int i= 1; i < n; i++)
    {
        cin>>s[i];
        if(s[i] != s[i-1]) sol++;
    }
    cout<< sol;
    return 0;
}