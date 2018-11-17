#include <iostream>
#include <math.h>
using namespace std;

const int MAX = 1000000;
bool tab[MAX];

int main() {
    ios_base::sync_with_stdio(false);

    for(int i = 0; i < MAX; i++) {
        tab[i] = true;
    }


    int n;
    cin>>n;

    if(n <= 1) {
        return 0;
    } else {

        for (int i = 2; i <= sqrt(n); ++i) {
            if(tab[i]){
                for (int j = i*i; j <= n ; j += i) {
                    tab[j] = false;
                }
            }
        }

        for (int k = 2; k <= n; ++k) {
            if(tab[k]) {
                cout<<k<<" ";
            }
        }
    }
}
