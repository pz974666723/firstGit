#include <deque>
#include <iostream>
using namespace std;

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

//大小操作
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//判断容器是否为空
	if (d1.empty()) {
		cout << "d1 is empty!" << endl;
	}
	else {
		cout << "d1 not empty!" << endl;
		//统计大小
		cout << "d1 size: " << d1.size() << endl;
	}

	//重新指定大小
	d1.resize(15);
	printDeque(d1);

	d1.resize(16, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

int main() {

	test01();

	return 0;
}