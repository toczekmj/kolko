#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    int n;
    vector<int> v;

    while(cin>>n)
    {
        v.push_back(n);
    }

    sort(v.begin() , v.end());

    for(auto& n : v)
        cout<<n<<" ";

}
