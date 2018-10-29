#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    vector<int> cp;
    int n,k,p;
    cin>>n>>k;

    for(int i = 0; i < n; i++){
        cin>>p;
        numbers.push_back(p);
    }

    for(int i = 0; i < k; i++){
        cp.push_back(numbers[i]);
    }
    numbers.erase(numbers.begin(), numbers.begin()+k);

    for(int i = 0; i < numbers.size(); i++)
        cout<<numbers[i]<<" ";

    for(int i = 0; i < cp.size(); i++)
        cout<<cp[i]<<" ";
}
