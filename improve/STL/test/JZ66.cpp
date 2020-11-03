#include<iostream>
#include<vector>

using namespace std;
int x[4]={-1, 0, 1, 0}, y[4]={0, 1, 0, -1};
int count = 0, hang = 0, lie = 0, lim = 0;
using V = vector<int>;
using VV = vector<V>;
VV mark;
int check(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void dfs(int i, int j){
    if (i<0 || i>=hang || j<0 || j>=lie || mark[i][j]==1 ) return;
    if(check(i)+check(j) > lim) return;
    mark[i][j] = 1;
    ++count;
        for(int k=0; k<4; k++){
        dfs(i+x[k], j+y[k]);
    }
}

int movingCount(int threshold, int rows, int cols)
{
    mark = VV(rows, V(cols, -1));
    hang = rows;
    lie = cols;
    lim = threshold;
    dfs(0, 0);
    return count;
}

int main(){
    int x = movingCount(18, 10, 10);
    cout << x << endl;
}