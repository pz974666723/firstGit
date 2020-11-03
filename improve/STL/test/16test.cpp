#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), min = nums[0] + nums[1] + nums[2];
    for(int i=0; i<n - 2; i++){
        int j = i+1, k = n-1;
        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(abs(min - target) > abs(sum - target)) min = sum;
            if(target == sum) return target;
            else if(target > sum) j++;
            else k--;
        }
    }
    return min;
}

int main(){
    vector<int> A = {0, 2, 1, -3};
    int x = 1;
    cout << threeSumClosest(A, x) << endl;
}