#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    if(a%b != 0){
        int t = a%b;
        a = b;
        b = t;
        nwd(a,b);
    }else return b;
}


int main()
{
ios_base::sync_with_stdio(false);

   int n = 0;
    cin>>n;
    int w[n];
    int x[n];


    for(int i = 0; i < n; i++)
    {
        cin>>x[i]>>w[i];
    }

    int licznik = 0;

    for(int i = 0; i < n; i++)
    {
        while(x[i] < w[i])
        {
            x[i] = 2 * x[i];
            licznik++;
        }
        cout<<licznik<<endl;
        licznik = 0;
    }




    return 0;
}
