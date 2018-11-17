#include <iostream>

using namespace std;

const int MAX = 100;
int tab[MAX][MAX];

void fill(int t)
{
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(i == 0 || i == t-1)
            {
                tab[i][j] = 1;
            }else{
                tab[i][0] = 1;
                tab[i][t-1] = 1;
            }
        }
    }
}

void draw(int t)
{
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(tab[i][j] == 0)
                cout<<" ";
            else cout<<"K";
        }
        cout<<endl;
    }
}


int main()
{
    int t;
    cin>>t;

    fill(t);
    draw(t);

}
