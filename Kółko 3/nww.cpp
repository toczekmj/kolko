#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    if(a%b != 0)
    {
        int t = a%b;
        a = b;
        b = t;
        nwd(a,b);
    }else return b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int dzielnik = nwd(a,b);
    int nww = (a*b) / dzielnik;
    cout<<nww;
    return 0;
}
