#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    long long plon = 0;
    cin>>n;
    long long b[n];

    for(long long i = 0; i < n; i++)
        cin>>b[i];
    
    cin>>m;
    sort(b, b+n, greater<long long>());

    for(long long i = 0; i < n; i++){
        if(m >= abs(b[i])){
            m -= abs(b[i]);
            plon += b[i]*b[i];
        }else if(m < abs(b[i])){
            plon += m*m;
            m = 0;
            break;
        }else if(m <= 0) break;
    }
    cout<<abs(plon);
}
