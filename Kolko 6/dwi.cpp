#include <iostream>
#include "math.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    long long a,b;
    cin>>a>>b;
    long long w1=0 , w2=0;
    long long tab1[a];
    long long tab2[b];
    long long l1 = 0 , l2 = 0;
    long long licznik = 0;

    for(long long i = 0; i < a; i++)
    {
        cin>>tab1[i];
        w1 += tab1[i];
        l1++;
    }

    for(long long i = 0; i < b; i++)
    {
        cin>>tab2[i];
        w2 += tab2[i];
        l2++;
    }

    while(w1 != w2)
    {
        if(w1 > w2)
        {
            w1 -= tab1[l1-1];
            l1--;
            licznik++;
        } else {
            w2 -= tab2[l2-1];
            l2--;
            licznik++;
        }
    }
    cout<<licznik;
    return 0;
}
