#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> snake;
void sort_back(){
    sort(snake.rbegin(), snake.rend());
}


int main()
{
    int n;
    cin>>n;

    int isdescending = 2;
    int start = 1

    for(int i = 0; i < n; i++){
        snake.push_back(start);
        cout<<snake[i]<<" ";
        start++;
    }
    cout<<endl;
    for(int i = 0; i < n-1; i++)
    {

        start = snake[n-1];
        snake.erase(snake.begin(), snake.end());

        for(int k = 0; k < n; k++)
        {
            snake.push_back(start+1);
            start++;
        }

        if(isdescending%2 == 0) sort_back();

        for(int j = 0; j < n; j++)
        {
            cout<<snake[j]<<" ";
        }
        cout<<endl;

        if(isdescending%2 == 0) sort(snake.begin(), snake.end());

        isdescending++;
    }
}
