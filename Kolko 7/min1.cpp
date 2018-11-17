#include <iostream>
using namespace std;

int main() {
    long long n;
    long long min = 1000000000;


    while(cin>>n) {
        if(n < min)
            min = n;
    }
    cout<<min;
}

