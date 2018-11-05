#include "iostream"
using namespace std;
const int MAX = 100;
int t;
int tab[MAX][MAX];
int temp[MAX];

void read()
{
  for(int i = 0; i < t; i++)
  {
    int temp1;
    cin>>temp[i]>>temp1;
    int j;
    for(j = 0; j < temp[i]-1; j++)
    {
      cin>>tab[i][j];
    }
    tab[i][j] = temp1;
  }
}

void print()
{
  for(int i = 0; i < t; i++)
  {
    for(int j = 0; j < temp[i]; j++)
    {
      cout<<tab[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin>>t;
  read();
  print();
}
