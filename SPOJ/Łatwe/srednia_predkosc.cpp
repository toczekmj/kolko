#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int tab[t][2];
    int tab2[t];

    for(int i = 0; i < t; i++)
        tab2[i] = 0;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
            cin>>tab[i][j];
        }
    }

    for(int i = 0; i < t; i++){
        int v1 = tab[i][0];
        int v2 = tab[i][1];
        int vsr = (2*v1*v2)/(v1+v2);
        cout<<vsr<<endl;
    }
}
