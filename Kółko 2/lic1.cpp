#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int first,last = 0;
    vector<int> arr;
    cin>>n;
    if(n >= 3 && n <= 10000000000){
        for(int i = 2; i < 99; i++){
            if(n%i != 0){
                arr.push_back(i);
                break;
            }
        }

        first = arr[0];
        last = n-1;

        if(first == last){
            cout<<first<<" "<<first;
        }else{
            cout<<first<<" "<<last;
        }

    }else return 0;
}
