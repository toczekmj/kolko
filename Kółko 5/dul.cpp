#include <iostream>

using namespace std;

int licznik1, licznik2, mianownik1, mianownik2;
int licznikdone,mianownikdone;

int nwd(int a, int b)
{
    int c;
    while(a%b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return b;
}


int main()
{
    ios_base::sync_with_stdio(false);


    int licznik1, licznik2;
    int mianownik1, mianownik2;

    cin>>licznik1>>mianownik1;
    cin>>licznik2>>mianownik2;

    int licznik_wynik = licznik1 * mianownik2 + licznik2 * mianownik1;
    int mianownik_wynik = mianownik1 * mianownik2;

    int NWD = nwd(licznik_wynik, mianownik_wynik);
    licznik_wynik /= NWD;
    mianownik_wynik /= NWD;

    int calosc = 0;

    if(licznik_wynik >= mianownik_wynik){
        calosc = licznik_wynik/mianownik_wynik;
        licznik_wynik = licznik_wynik % mianownik_wynik;
    }

    if(calosc > 0)
        cout<<calosc<<" ";
    if(licznik_wynik != 0)
        cout<<licznik_wynik<<"/"<<mianownik_wynik;


}