#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int x,k,a;
    cin>>x>>k>>a;
    bool ruch = false;

    int n = x/(k+a);
    x = x-(k+a)*(n-1);

    while (x >= 0)
    {
        ruch = !ruch;
        if(ruch) x -= k;
        if(!ruch) x -= a;
    }
    cout<<ruch;



    return 0;
}

