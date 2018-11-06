#include <iostream>
using namespace std;

void draw(int k)
{
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++)
            cout<<"K";
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    draw(n);
    system("pause >nul");
}

