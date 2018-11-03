#include <iostream>
#include "string"

using namespace std;

const int MAX = 1000005;
int tab[MAX];

int main()
{
  string a;
  int b,c;
  int i = 0;
  string plus = "+";
  string minus = "-";
  string div = "/";
  string mult = "*";
  string mod = "%";


  while(cin>>a>>b>>c)
  {
    if(a == plus)
      tab[i] = b+c;
    else if(a == minus)
      tab[i] = b-c;
    else if(a == div)
      tab[i] = b/c;
    else if(a == mult)
      tab[i] = b*c;
    else
      tab[i] = b%c;
    i++;
  }

  for(int j = 0; j < i; j++)
  {
    cout<<tab[j]<<endl;
  }

}
