#include<iostream>
using namespace std;

int findSqrt(int n) {
    int res = 1, i = 1;
    if(n == 0 || n == 1) {
        return n;
    }
    while(res <= n) {
        i++;
        res = i * i;
    }
    return i - 1;
}

int main() {
    int x = 17;
    cout << findSqrt(x) << endl;
    return 0;
}