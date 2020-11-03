#include <set>
#include<iostream>
using namespace std;

void test1(){
    set<int> s;
    //set不能插重复值的原因
	pair<set<int>::iterator, bool>  ret = s.insert(10);
	if (ret.second) {
		cout << "1st success" << endl;
	}
	else {
		cout << "1st fail" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "2nd success" << endl;
	}
	else {
		cout << "2nd fail" << endl;
	}

    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main(){
    test1();
    return 0;
}