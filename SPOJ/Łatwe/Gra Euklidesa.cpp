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

void zacznijGre(int t)
{
    for(int i = 0; i < t; i++){
        if(a[i] < b[i]){
            b[i] -= a[i];
        }else if(a[i] > b[i]){
            a[i] -= b[i];
        }else if(a[i] == b[i]){
            break;
        }
        cout<<a[i]<<" "<<b[i]<<endl;
    }
}


int main() 
{
    int t;
    cin>>t;
    wczytajZetony(t);
    zacznijGre(t);
}