#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

bool isPalindrome(ListNode* head) {
    stack<int> s;
    ListNode *front = head, *temp = head;
    int i = 0;
    while(front->next){
        s.push(front->val);
        front = front->next;
        i++;
    }
    s.push(front->val);
    for(int j = 0; j<=i/2; j++){
        if(s.top() != temp->val) return 0;
        temp = temp->next;\
        s.pop();
    }
    return 1;
}

int main(){
    ListNode node1(1), node2(2);
    node1.next = &node2;
    int x = isPalindrome(&node1);
    cout << x << endl;
}
