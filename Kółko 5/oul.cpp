#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    while(a%b != 0){
        int t = a%b;
        a = b;
        b = t;
    }
    return b;
}


int main()
{
    ios_base::sync_with_stdio(false);

    int licznik1, mianownik1;
    int licznik2, mianownik2;

    cin>>licznik1>>mianownik1;
    cin>>licznik2>>mianownik2;

    int l_wynik = licznik1 * mianownik2 - licznik2 * mianownik1;
    int m_wynik = mianownik1*mianownik2;

    int NWD = nwd(l_wynik, m_wynik);
    if(NWD != 1 && NWD != -1){
    l_wynik /= NWD;
    m_wynik /= NWD;
    }

    int calosci = 0;

    if(l_wynik >= m_wynik || l_wynik*-1 >= m_wynik){
        calosci = l_wynik / m_wynik;
        l_wynik = l_wynik % m_wynik;
    }

    if(calosci != 0)
        cout<<calosci<<" ";
    if(l_wynik != 0 && calosci >= 0)
        cout<<l_wynik<<"/"<<abs(m_wynik);
    if(l_wynik != 0 && calosci < 0)
        cout<<abs(l_wynik)<<"/"<<abs(m_wynik);


}