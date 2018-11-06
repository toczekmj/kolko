#include "iostream"
#include "math.h"
using namespace std;

const int MAX = 10;
int tab[MAX][2];
int res[MAX];

void read(int d)
{
  for(int i = 0; i < d; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      cin>>tab[i][j];
    }
  }
}

void power(int d)
{

  for(int i = 0; i < d; i++)
  {
    res[i] = pow(tab[i][0] , tab[i][1]);
  }
}

int main()
{
  int d;
  cin>>d;
  read(d);
  power(d);
  for(int i = 0; i < d; i++)
    cout<<res[i] % 10<<endl;
}
