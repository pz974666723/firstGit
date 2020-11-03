#include<iostream>

using namespace std;

int cuttingRope(int n) {
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n == 3) return 2;
    if(n == 4) return 4;
    long res = 1;
    while(n>4){
        res *= 3;
        res = res % 1000000007;
        n -= 3;
    }
    return (int)(res * n % 1000000007);
}

int main(){
    int x = 120;
    cout << cuttingRope(120) << endl;
}