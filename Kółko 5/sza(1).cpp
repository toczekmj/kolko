#include <iostream>
#include "algorithm"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    int tab[n*n];

    for(int i = 0; i < n*n; i++)
      cin>>tab[i];

    sort(tab, tab+n*n);
    int sum = 0;

    for(int i = n*n-1; i >= n; i--)
      sum += tab[i];

    cout<<sum;
}
