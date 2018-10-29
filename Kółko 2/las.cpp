#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int grubosc;
    int rodzaj;
    int ilosc;
    int wprowadzone = 0;
    cin>>ilosc;
    set<int> rodzaje;

    while(cin>>grubosc>>rodzaj)
    {
        rodzaje.insert(rodzaj);
        wprowadzone++;
    }
    cout<<rodzaje.size();
}
