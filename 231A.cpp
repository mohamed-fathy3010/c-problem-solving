#include "bits/stdc++.h"
using namespace std;
 int main (){
    int n,sol = 0;
    int p1,p2,p3;
    cin >> n;
    for(int i = 0 ;i < n ;i++){
            cin>> p1 >> p2 >> p3;
            if(p1 + p2 + p3 >= 2)
            sol++;
    }
    cout<< sol << endl;
 }