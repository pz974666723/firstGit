#include <deque>
#include <iostream>
using namespace std;

//const修饰deque后iterator需要变成const_iterator
void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//加入const_iterator后，*it不可修改 
        cout << *it << " ";

	}
	cout << endl;
}
//deque构造
void test01() {

	deque<int> d1; //无参构造函数
	for (int i = 0; i < 5; i++)
	{
		d1.push_back(i);
	}
    for (int i = 0; i < 5; i++)
	{
		d1.push_front(i);
	}
	printDeque(d1);
	deque<int> d2(d1.begin(),d1.end());//区间的方式赋值
	printDeque(d2);

	deque<int>d3(10,100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);
}

int main() {

	test01();

	return 0;
}