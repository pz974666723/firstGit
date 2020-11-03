#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

bool backspaceCompare(string S, string T) {
        if(S == T) return true;
        stack<char> stks;
        stack<char> stkt;
        for(int i=0; i<S.size(); i++){
            if(S[i] == '#') {
                if(stks.size()) stks.pop();
            }
            else  stks.push(S[i]);
        }
        for(int i=0; i<T.size(); i++){
            if(T[i] == '#')  {
                if(stkt.size()) stkt.pop();
            }
            else  stkt.push(T[i]);
        }
        if(stks.size() != stkt.size()) return false;
        else{
            while(stks.size()){
                if(stks.top() != stkt.top()) return false;
                stks.pop();
                stkt.pop();
            }
            //if(stks.top() != stkt.top()) return false;
        }
        return true;
    }

int main(){
    bool t = backspaceCompare("abcd", "bbcd");
    cout << t;

    return 0;
}