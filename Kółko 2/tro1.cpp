#include <iostream>
using namespace std;

int main()
{
    int h;
    cin>>h;

    for(int i = 1; i <= h; i++){
        for(int j = 0; j < i; j++)
            cout<<"T";
        cout<<endl;
    }

    for(int i = h-1; i > 0; i--){
        for(int j = i; j > 0; j--)
            cout<<"T";
        cout<<endl;
    }
}


