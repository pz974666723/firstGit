#include <vector>
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

//1.一元谓词
class GreaterFive{
public:
	bool operator()(int val) {
		return val > 5;
	}
};

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

    //匿名对象GreaterFive()
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "not find" << endl;
	}
	else {
		cout << "find: " << *it << endl;
	}

}

int main() {

	test01();

	return 0;
}