#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,anton = 0;
    cin >> n;
    for(int i = 0; i < n ; i++)
    { char x;

        cin>> x;
        if( x == 'A') anton ++;
    }
    if(anton == (n - anton)) cout << "Friendship";
    else if (anton > (n - anton)) cout << "Anton";
    else cout <<  "Danik";
}