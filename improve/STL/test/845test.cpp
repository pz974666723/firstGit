#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int longestMountain(vector<int>& A) {
    int count = 0, left = 0, right = 0, n = A.size();
    while(left < n-2){//left后面至少得有两个数才满足一座山
        right = left + 1; 
        if(A[left] < A[right]){
            while(A[right] < A[right+1] && right < n-1){//先让right到山顶
                ++right;
            }
            if(A[right] == A[right+1]){
                left = right;
                continue;
            } //不是山脉就退出
            while(A[right] > A[right+1] && right < n-1){//再让right到山底
                ++right;
            }
            count = max(count, right - left + 1);                
        }            
        left = right;
    }
    return count;
}

int main(){
    vector<int> A = {2, 0, 2, 1};
    cout << longestMountain(A) << endl;
}