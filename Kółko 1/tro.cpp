#include <iostream>
using namespace std;

void licz(int ab, int bc)
{
    ab = ab*ab;
    bc = bc*bc;
    cout<<bc-ab;
}


int main()
{
    int ab, ac, bc;
    cin>>ab>>bc;
    licz(ab,bc);
}

