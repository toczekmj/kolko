#include <iostream>
#include "math.h"

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    int mn = min(min(a,b) , min(b,c));
    int mx = max(max(a,b) , max(b,c));

    if(abs(mn) > mx)
    {
        cout<<abs(mn);
    } else {
        float t = mx - mn;
        cout<<ceil(t/2);
    }

    return 0;
}
