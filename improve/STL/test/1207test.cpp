#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> v;
    int i;
    for(i = 0; i<arr.size();i++){
        while(i<arr.size()-1 && arr[i] == arr[i+1]) i++;
        v.push_back(count(arr.begin(), arr.end(), arr[i]));
    }
    for(i = 0; i<v.size()-1;i++){
        if(count(v.begin(), v.end(), v[i]) != 1) return 0;
    }
    return 1;
}

int main(){
    vector<int> arr = {1};
    cout << uniqueOccurrences(arr) << endl;
    return 0;
}