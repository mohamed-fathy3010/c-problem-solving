#include "bits/stdc++.h"
using namespace std;

int main() {
	int n, sol=0;
    string s;
    char temp;
    cin>>n >>s;
    temp = s[0];
    for(int i=1 ;i< s.length(); i++)
    {
        if(s[i] == temp) sol++;
        else temp = s[i];
    }
    cout<< sol<<endl;
    return 0;
}