#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,h;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>h;
        int tab[h];
        for(int i = 0; i < h; i++)
            cin>>tab[i];
        int temp = tab[0];
        for(int i = 0; i < h-1; i++)
            tab[i] = tab[i+1];
        tab[h-1] = temp;
        for(auto n : tab)
            cout<<n<<" ";
        cout<<endl;
    }
}
