#include <iostream>
 
#include <algorithm>
 
using namespace std;
 
long long int tab[1000001];
 
long long int ilosc[1000001];
 
long long int n, uderzenia;
 
long long int MAX, it;
 
int main()
 
{
 
    ios_base::sync_with_stdio(false);
 
    cin >> n >> uderzenia;
 
    for (int i=0; i<n; i++)
 
    {
 
        cin >> tab[i];
 
    }
 
    if(n>uderzenia)
 
    {
 
        sort(tab, tab+n);
        for(int j=0;j<n-uderzenia;j++)
        {
            ilosc[tab[j]]+=1;
        }
 
        while(it<n-uderzenia)
        {
            if(ilosc[it]>MAX)
            {
                MAX=ilosc[it];
            }
            it++;
        }
         cout << uderzenia+MAX;
    }

    else if(n<=uderzenia)
    {
        cout << n;
    }
    return 0;
}