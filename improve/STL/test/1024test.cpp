#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int videoStitching(vector<vector<int>>& clips, int T){
    int maxR[T] = {}, last = 0, pre = 0, count = 0, test[T];
    for (auto it:clips){
        maxR[it[0]] = max(maxR[it[0]], it[1]);//找到所有左端点中右端点最大的值
    }
    for (int i = 0; i < T; i++){
        last = max(last, maxR[i]);
        if (i == last)
            return -1;
        if (pre == i){
            ++count;
            pre = last;
        }
    }
    return count;
}

int main(){
    vector<vector<int>> clips = {{0, 2}, {4, 6}, {8, 10}, {1, 9}, {1, 5}, {5, 9}};
    int T = 10;
    cout << videoStitching(clips, T) << endl;
    return 0;
}