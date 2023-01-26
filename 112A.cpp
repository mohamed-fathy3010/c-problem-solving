#include "bits/stdc++.h"
using namespace std;
int main(){
    string x,y;
    cin >> x >> y ;
    for(int i = 0 ; i < x.length(); i++) x[i] = tolower(x[i]);
    for(int i = 0 ; i < y.length(); i++) y[i] = tolower(y[i]);
    cout << x.compare(y);
}