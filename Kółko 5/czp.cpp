#include <iostream>
using namespace std;

int dni, gr, mr, sr, gz, mz, sz, czas;
int main()
{
    cin>>dni;

    for(int i = 0; i < dni; i++){
        cin>>gr>>mr>>sr;
        cin>>gz>>mz>>sz;

        int r = sr + mr*60 + gr*3600;
        int k = sz + mz*60 + gz*3600;
        czas += k-r;
    }

    int g = czas/3600;
    czas = czas%3600;
    int m = czas/60;
    czas = czas%60;
    int s = czas;
    cout<<g<<":";

    if(m < 10) cout<<"0"<<m<<":";
    else cout<<m<<":";

    if(s < 10) cout<<"0"<<s;
    else cout<<s;


}
