#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> tab;
    int n;
    while(cin>>n)
    {
        tab.push_back(n);
    }
    reverse(tab.begin() , tab.end());
    for(auto& n : tab)
        cout<<n<<" ";
}
