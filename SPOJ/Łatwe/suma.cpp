#include "iostream"
using namespace std;
const int MAX = 1000005;

int tab[MAX];
int i = 0;

void read()
{
  while (cin>>tab[i]) {
    i++;
  }
}

void print()
{
  int suma = 0; //= tab[0];
  //cout<<tab[0]<<endl;
  for (size_t k = 0; k < i; k++) {
    suma += tab[k];
    cout<<suma<<endl;
  }

}

int main()
{
  ios_base::sync_with_stdio(false);
  read();
  print();
}
