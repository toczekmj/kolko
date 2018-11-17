#include <iostream>

using namespace std;

bool isPrime(int t)
{
    if(t < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i < t; i++)
        {
            if(t%i != 0)
            {
                return false;
            }
            return true;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    if(isPrime(t))
        cout<<"Z"<<endl;
    else cout<<"P"<<endl;
}
