#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a == b && b == c)
        cout<<2;
    else if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
        cout<<1;
    else cout<<0;
}


