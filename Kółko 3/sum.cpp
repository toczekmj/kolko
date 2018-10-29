#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int suma = 0;
    for(int i = a; i <= b; i++)
        suma += i;
    cout<<suma;
}
