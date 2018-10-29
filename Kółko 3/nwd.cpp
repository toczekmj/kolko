#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    if(a%b != 0){
        int temp = a%b;
        a = b;
        b = temp;
        nwd(a,b);
    }else return b;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<nwd(a,b);
}
