#include <iostream>
#include "math.h"
using namespace std;

long long a = 1 , b = 1 , n = 0;

int main() {
    ios_base::sync_with_stdio(false);
    int k;
    cin>>k;

    if(k == 1 || k == 2)
    {
        cout<<1;
    } else {
        while(n < k-2)
        {
            long long t = a+b;
            a = b;
            b = t;
            n++;
        }
        cout<<b;
    }
    return 0;
}
