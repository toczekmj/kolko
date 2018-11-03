#include <iostream>

using namespace std;

const int MAX = 1000005;
int a[MAX];
int b[MAX];


int wczytajZetony(int t)
{
    for(int i = 0; i < t; i++){
        cin>>a[i]>>b[i];
    }
}

void graj(int a, int b)
{
    if(a == b){
        cout<<a+b<<endl;
    }else{
        while(a != b){
            if(a > b){
                a = a-b;
            }else{
                b = b-a;
            }
        }
        cout<<a+b<<endl;
    }
}

void zacznijGre(int iloscPartii)
{
    for(int i = 0; i < iloscPartii; i++){
        graj(a[i] , b[i]);
    }
}


int main()
{
    int t;
    cin>>t;
    wczytajZetony(t);
    zacznijGre(t);
}
