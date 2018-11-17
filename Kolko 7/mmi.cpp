#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    vector<float> v;

    int n;
    cin>>n;

    for (int i = 0; i < n; ++i) {
        float t;
        cin>>t;
        v.push_back(t);
    }

    sort(v.begin() , v.end());


    cout.precision(2);
    cout<<fixed;
    cout<<v[0]<<" "<<v[v.size()-1];

}
