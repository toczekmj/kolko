#include <iostream>
#include <vector>
using namespace std;

int nwd(int a, int b)
{
    if(a%b != 0){
        int t = a%b;
        a = b;
        b = t;
        nwd(a,b);
    }else return b;
}

int main()
{
    int n,k,b,suma = 0;
    cin>>n;
    vector<int> m;

    while(cin>>k && k != 0){
        m.push_back(k);
    }

    for(auto& n : m)
        suma += n;

    int nw = nwd(suma, n);
    cout<<suma/nw<<"/"<<n/nw<<endl;
}

