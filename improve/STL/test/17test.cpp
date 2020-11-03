#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

void letCombine(vector<string>& combineS, const string& digits, int i, unordered_map<char, string>& hash,
                    string& combine){//引用传递，避免拷贝，const只读操作
    if(i == digits.size()) combineS.push_back(combine);//i == digits.size()-1时还要继续添加
    else{
        char digit = digits[i];
        auto it = hash.find(digit);
        string letters = (hash.find(digit))->second;
        for(auto letter:letters){
            combine.push_back(letter);
            letCombine(combineS, digits, i+1, hash, combine);
            combine.pop_back();
        }
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> combineS;
    if(digits.empty()) return combineS;
    unordered_map<char, string> hash = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };
    string combine;
    letCombine(combineS, digits, 0, hash, combine);
    return combineS;
}

int main(){
    vector<string> v;
    string s = "23";
    v = letterCombinations(s);
    return 0;
}