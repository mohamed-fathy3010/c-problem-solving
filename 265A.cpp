#include "bits/stdc++.h"
using namespace std;

int main() {
	string s,c;
    cin>>s>>c;
    int start = 0;
    for(int i = 0 ;i< c.length(); i++)
    {
        if(c[i] == s[start])
        start++;
    }
    cout<<start + 1<<endl;
    return 0;
}