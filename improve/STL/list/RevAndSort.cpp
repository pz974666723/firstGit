#include <list>
#include<iostream>
using namespace std;

void printList(const list<int>& L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1 , int val2)
{
	//降序：前面一个大于后面一个
    return val1 > val2;
}

//反转和排序
void test01()
{
	list<int> L;
	L.push_back(2);
	L.push_back(1);
	L.push_back(5);
	L.push_back(4);
    L.push_back(3);
	printList(L);

	//反转容器的元素
	L.reverse();
	printList(L);

	//排序
	L.sort(); //默认的排序规则 从小到大
	printList(L);

	L.sort(myCompare); //指定规则，从大到小
    // L.sort();
    // L.reverse();//可以通过sort再reverse实现从大到小排序
	printList(L);
}

int main() {

	test01();

	return 0;
}