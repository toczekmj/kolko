#include "iostream"
using namespace std;

const int MAX = 1000005;
int tab[MAX];

void read(int t)
{
  for(int i = 0; i < t; i++)
  {
    cin>>tab[i];
  }
}


int main()
{
  int t;
  cin>>t;
  read(t);

}
