#include <iostream>
using namespace std;

int pokoje[400000];

int main() {
    ios_base::sync_with_stdio(false);

    int lp = 0 , lu = 0 , przem = 0;
    cin>>lp>>lu>>przem;

    for (int i = 0; i < lu; ++i)
    {
        cin>>pokoje[i];
    }

    int klucz = pokoje[0];

    for (int j = 0; j < przem; ++j)
    {
        int nr_ucznia;
        int idzie_do;
        cin>>nr_ucznia>>idzie_do;

        if(pokoje[nr_ucznia-1] == klucz)
        {
            klucz = idzie_do;
        }

        pokoje[nr_ucznia-1] = idzie_do;
    }
    cout<<klucz;

}
