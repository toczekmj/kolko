#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    int licz = 0;
    while(cin>>n)
    {
        if(n%2 == 0)
            licz++;
    }
    cout<<licz;
}
