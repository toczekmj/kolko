#include "iostream"

using namespace std;
int i;

bool isPrime(int t)
{
  if(t > 1)
  {
    for(i = 2; i < t; i++)
    {
      if (t%i == 0) {
        return false;
      }
    }
    if(t == i)
    {
      return true;
    }
  }else return false;
}

int main()
{
  int t;
  cin>>t;
  if(isPrime(t)){
    cout<<"yes";
  }else cout<<"no";
}
