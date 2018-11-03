#include <iostream>
#include "string"

using namespace std;

const int MAX = 1000005;
int tab[MAX];
int b,c,i = 0;


void read()
{
  string a;
  string plus = "+";
  string minus = "-";
  string divd = "/";
  string mult = "*";
  string mod = "%";
  
  while(cin>>a>>b>>c)
  {
    if(a == plus)
      tab[i] = b+c;
    else if(a == minus)
      tab[i] = b-c;
    else if(a == divd)
      tab[i] = b/c;
    else if(a == mult)
      tab[i] = b*c;
    else
      tab[i] = b%c;
    i++;
  }
}

void show()
{
  for(int j = 0; j < i; j++)
  {
    cout<<tab[j]<<endl;
  }
}

int main()
{
  read();
  show();
}
