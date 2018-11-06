#include "iostream"
#include "string"
#include "vector"
using namespace std;
const int MAX = 1000005;
int tab[MAX];

int pow(int t)
{
  int s = 1;
  while (t > 0) {
    s *= t;
    t--;
  }
  return s;
}

void tostr(int i)
{
  int n = pow(tab[i]);
  string l = to_string(n);

  if(stoi(l) > 9)
  {
    cout<<l[0]<<" "<<l[1]<<endl;
  }
  else
  {
    cout<<"0 "<<l[0]<<endl;
  }

}

void write(int t)
{
  for(int i = 0; i < t; i++)
  {
    tostr(i);
  }
}

void read(int t)
{
  for(int i = 0; i < t; i++)
  {
    cin>>tab[i];
  }
}

int main()
{
  int t; cin>>t;
  read(t);
  write(t);
}
