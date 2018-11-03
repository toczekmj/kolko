#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    int tab[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>tab[i][j];

    int suma = 0;
    
    for(int i = 0; i < n; i++){
        int maks = 0;
        for(int j = 0; j < n; j++)
            if(tab[i][j] > maks)
                maks = tab[i][j];
        suma += maks;
    }
    cout<<suma;
}
