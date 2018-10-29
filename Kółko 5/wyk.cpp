#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int start = 0, ile = 0;
    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        if(k == start+1){
            start++;
        }else ile++;
    }
    cout<<ile;
}